/*
	XPT_fnc_loadInventory
	Author: Superxpdude
	Loads a custom inventory for a unit from a config file
	
	Config should be in the following format:
	
	class loadoutName
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		// Weapon definitions all use the following format:
		// {Weapon Classname, Suppressor, Pointer (Laser/Flashlight), Optic, [Primary magazine, ammo count], [Secondary Magazine (GL), ammo count], Bipod}
		// Any empty definitions must be defined as an empty string, or an empty array. Otherwise the loadout will not apply correctly.
		
		primaryWeapon[] = {"arifle_MXC_F", "", "acc_flashlight", "optic_ACO", ["30Rnd_65x39_caseless_mag",30], [], ""}; // Primary weapon definition
		secondaryWeapon[] = {"launch_B_Titan_short_F", "", "", "", ["Titan_AP", 1], [], ""}; // Secondary weapon (Launcher) definition.
		handgunWeapon[] = {"hgun_ACPC2_F", "", "", "", ["9Rnd_45ACP_Mag", 9], [], ""}; // Handgun definition
		binocular = "Binocular";
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		// Linked items requires all six definitions to be present. Use empty strings if you do not want to add that item.
		linkedItems[] = {"ItemMap", "ItemGPS", "ItemRadio", "ItemCompass", "ItemWatch", ""}; // Linked items for the unit, must follow the order of: Map, GPS, Radio, Compass, Watch, NVGs.
		
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
	
	Parameters:
		0: Object - Unit to apply loadout
		1: Config - Loadout to apply.
		
	Returns: Bool
		True if loadout was applied successfully
		False if loadout was not applied successfully
*/

#include "xpt_script_defines.hpp"

// Define variables
private ["_subclasses", "_isSubclass", "_class"];
params [
	["_unit", nil, [objNull]],
	["_baseClass", nil, [configNull]]
];

// Exit the script if _unit is not an object or _class is not a config class
if ((isNil "_unit") or (isNil "_baseClass")) exitWith {false};

// setUnitLoadout is apparently a global command. This section is no longer needed
/*
if (!local _unit) exitWith {
	// If this has not been run on the server, we need to send it to the server to find the right owner
	if (!isServer) then {
		// Send the script on the server
		[_unit, _class] remoteExec ["XPT_fnc_loadInventory", 2];
	} else {
		// If this has been run on the server, find out who the owner is (since we've already confirmed it isn't local)
		[_unit, _class] remoteExec ["XPT_fnc_loadInventory", owner _unit];
	};
};
*/

// Check if the specified class has sub-loadouts
_subclasses = "true" configClasses _baseClass;
if ((count _subclasses) > 0) then {
	// If we have any subclasses, select a random one.
	_class = selectRandom _subclasses;
	_isSubclass = true;
} else {
	_class = _baseClass;
};

// Retrieve loadout data from config files
private _displayName = [((_class >> "displayName") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _primaryWeapon = [((_class >> "primaryWeapon") call BIS_fnc_getCfgData)] param [0, [], [[]], [0,7]];
private _secondaryWeapon = [((_class >> "secondaryWeapon") call BIS_fnc_getCfgData)] param [0, [], [[]], [0,7]];
private _handgunWeapon = [((_class >> "handgunWeapon") call BIS_fnc_getCfgData)] param [0, [], [[]], [0,7]];
private _binocular = [((_class >> "binocular") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _uniformClass = [((_class >> "uniformClass") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _headgearClass = [((_class >> "headgearClass") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _facewearClass = [((_class >> "facewearClass") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _vestClass = [((_class >> "vestClass") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _backpackClass = [((_class >> "backpackClass") call BIS_fnc_getCfgData)] param [0, "", [""]];
private _linkedItems = [((_class >> "linkedItems") call BIS_fnc_getCfgData)] param [0, [], [[]], 6];
private _uniformItems = [((_class >> "uniformItems") call BIS_fnc_getCfgData)] param [0, [], [[]]];
private _vestItems = [((_class >> "vestItems") call BIS_fnc_getCfgData)] param [0, [], [[]]];
private _backpackItems = [((_class >> "backpackItems") call BIS_fnc_getCfgData)] param [0, [], [[]]];

// Retrieve medical items from config file.
if ((["ace_medical_level", 1] call BIS_fnc_getParamValue) == 1) then {
	// Only load these classes if basic medical is being used.
	_uniformItems append ([((_class >> "basicMedUniform") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
	_vestItems append ([((_class >> "basicMedVest") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
	_backpackItems append ([((_class >> "basicMedBackpack") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
} else {
	// Only load these classes if advanced medical is being used.
	_uniformItems append ([((_class >> "advMedUniform") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
	_vestItems append ([((_class >> "advMedVest") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
	_backpackItems append ([((_class >> "advMedBackpack") call BIS_fnc_getCfgData)] param [0, [], [[]]]);
};

// Function to ensure that magazines have an ammo count defined
private _fn_fixMagazine = {
	_x = _this;
	// Only run if the item does not have a third entry in the array
	if (count _x == 2) then {
		_classname = (_x select 0);
		if (isClass (configFile >> "CfgMagazines" >> _classname)) then {
			[false, nil, format ["Magazine type '%1' has no ammo count defined.",_classname], 0] call XPT_fnc_error;
			_x set [2, (configFile >> "CfgMagazines" >> _classname >> "count") call BIS_fnc_getCfgData];
		};
	};
	_x
};

_uniformItems = _uniformItems apply {_x call _fn_fixMagazine};
_vestItems = _vestItems apply {_x call _fn_fixMagazine};
_backpackItems = _backpackItems apply {_x call _fn_fixMagazine};

// Merge some arrays into their main unit loadout entry
private _uniformArray = [_uniformClass, _uniformItems];
private _vestArray = [_vestClass, _vestItems];
private _backpackArray = [_backpackClass, _backpackItems];
private _binocularArray = [_binocular,"","","",[],[],""];

// Fix for "Bad Vehicle Type" errors regarding weapons and inventories
{
	// If the main classname is undefined, replace the array with an empty one.
	if ((_x select 0) == "") then {
		_x deleteRange [0,10]; // Ensure the entire array is emptied
	};
} forEach [_primaryWeapon, _secondaryWeapon, _handgunWeapon, _uniformArray, _vestArray, _backpackArray, _binocularArray];

// Start formatting our unit loadout array.
private _loadout = [
	_primaryWeapon,
	_secondaryWeapon,
	_handgunWeapon,
	_uniformArray,
	_vestArray,
	_backpackArray,
	_headgearClass, 
	_facewearClass,
	_binocularArray,
	_linkedItems
];

// Apply the loadout
_unit setUnitLoadout _loadout;

// Return true if script is completed.
true 