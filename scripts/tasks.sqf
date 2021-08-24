// Script for creating player tasks
// Only to be run on the server. BIS_fnc_taskCreate is global.
if (!isServer) exitWith {};
/*
----- OPFOR objectives -----
*/

// Make contact with vostok station
[
	EAST, // Owners of the task. See wiki page for details
	"east_contact_vostok", // Name of the task, along with parent name. Parent name is used for nested tasks
	["Make Contact with Vostok Research Station", "Contact Vostok Station", ""], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	[objNull], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"search", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;


if (!isNil "commander_EAST") then {
// SECRET OBJ 1:
[
	commander_EAST, 
	"east_secret_1", 
	"OPFOR_secret_1", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 2:
[
	commander_EAST, 
	"east_secret_2", 
	"OPFOR_secret_2", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 3:
[
	commander_EAST, 
	"east_secret_3", 
	"OPFOR_secret_3", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 4:
[
	commander_EAST, 
	"east_secret_4", 
	"OPFOR_secret_4", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;
};
/*
----- BLUFOR objectives -----
*/

// MAIN OBJ 1:
[
	WEST, 
	"west_investigate_safehouses", 
	["Search CIA safe houses that our inside man may have run to. his name is Dobromil Kubik.", "Search for Inside Man", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"search", 
	true 
] call BIS_fnc_taskCreate;

[
	WEST, 
	"west_investigate_vostok", 
	["Find out what the status of the research station is.", "Investigate Vostok Station", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"scout", 
	true 
] call BIS_fnc_taskCreate;

if (!isNil "commander_WEST") then {
// SECRET OBJ 1:
[
	commander_WEST, 
	"west_secret_1", 
	"BLUFOR_secret_1", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 2:
[
	commander_WEST, 
	"west_secret_2", 
	"BLUFOR_secret_2", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 3:
[
	commander_WEST, 
	"west_secret_3", 
	"BLUFOR_secret_3", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;

// SECRET OBJ 4:
[
	commander_WEST, 
	"west_secret_4", 
	"BLUFOR_secret_4", 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"documents", 
	true 
] call BIS_fnc_taskCreate;
};