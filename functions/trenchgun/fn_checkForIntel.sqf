// returns true if any object with var prefix 'intel' is inside the ACE Cargo of an array of objects passed to it
/*
*	PARAMS:
*	0 = thisList from the trigger calling the function
*	1 = side you are checking for
*/

// init passed vars
_thisList = _this select 0;
_side = _this select 1;
//systemChat format ["thisList array: %1", _thisList];

// local vars
_cargo = [];	// holds cargo of all vics
_totalIntel = 0;	// tally of how much intel is in vics

// makes an array of all the cars inside the trigger
_vics = _thisList select {_x isKindOf "Car"};
//systemChat format ["_vics array: %1", _vics];

// append all the ACE cargo of each vehicle to the _cargo list
{
	_cargo append (_x getVariable ["ace_cargo_loaded", []]);
} forEach _vics;
//systemChat format ["_cargo array: %1", _cargo];

// now count how many intel objects are in cargo
{
    _arr = (vehicleVarName _x) splitString "_";
	if ( count _arr > 0 ) then {
		_pre = _arr select 0;
		if (_pre isEqualTo "intel") then {
			_totalIntel = _totalIntel + 1;
		};
	};
} forEach _cargo;

// return total intel in vics
//hint format ["Intel gathered: %1.", _totalIntel];
_totalIntel
