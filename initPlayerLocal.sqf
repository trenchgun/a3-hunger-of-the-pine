// initPlayerLocal.sqf
// Executes on a client machine when they load the mission, regardless of if it's at mission start or JIP.
// _this = [player:Object, didJIP:Boolean]
params ["_player", "_jip"];

// Call the template initPlayerLocal function
_this call XPT_fnc_initPlayerLocal; // DO NOT CHANGE THIS LINE

// Add any mission specific code after this point

// Uncomment the line below to use briefing.sqf for mission briefings. Un-needed if you're using XPTBriefings.hpp
//[] execVM "scripts\briefing.sqf";

// make sure markers are only visible to their respective teams
[] spawn {
        {
            _arr = _x splitString "_";
            _pre = _arr select 0;
            if (_pre in ["WEST","EAST","GUER","CIV"]) then {
                if (format["%1",side player] == _pre) then {
                    _x setMarkerAlphaLocal 1;
                } else {
                    _x setMarkerAlphaLocal 0;
                };
            };
            
        } count allMapMarkers;
};

/*
_groupName = groupId (group player);
_groupStr = format ["%1", _groupName];

if (side player isEqualTo WEST) then {
	[
		[
			["Task Force PAPA BEAR", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
			[_groupStr, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>", 15]
		]
	] spawn BIS_fnc_typeText;
};

if (side player isEqualTo EAST) then {
	[
		[
			["Group ZILANT", "<t align = 'center' shadow = '1' size = '0.7' font='PuristaBold'>%1</t><br/>"],
			[_groupStr, "<t align = 'center' shadow = '1' size = '0.7'>%1</t><br/>", 15]
		]
	] spawn BIS_fnc_typeText;
};
*/