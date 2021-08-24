if ((!isServer) && (player != player)) then {waitUntil {player == player};};

//titleText ["STRIGOI DEMO", "BLACK FADED", 0.5];

//setViewDistance 2000;
//enableEnvironment [false, true];

//[] execVM "briefing.sqf";

// init strigoi
["strigoi_1",300,true,1,500] execvm "AL_strigoi\strigoi.sqf";
["strigoi_2",300,true,1,500] execvm "AL_strigoi\strigoi.sqf";
["strigoi_3",300,true,1,500] execvm "AL_strigoi\strigoi.sqf";
["strigoi_4",300,true,1,500] execvm "AL_strigoi\strigoi.sqf";
["strigoi_5",300,true,1,500] execvm "AL_strigoi\strigoi.sqf";

// init flamer
["flamer_1",300,1,500] execvm "AL_flamer\al_flamer.sqf";
["flamer_2",300,1,500] execvm "AL_flamer\al_flamer.sqf";
["flamer_3",300,1,500] execvm "AL_flamer\al_flamer.sqf";
["flamer_4",300,1,500] execvm "AL_flamer\al_flamer.sqf";

// init worm (this should actually be activated later)
//null=["worm_1"] execvm "AL_worm\worm.sqf"

// set up babel
f_available_languages = [
["en", "English"],
["ru", "Russian"]
];
{
    _x call acre_api_fnc_babelAddLanguageType;
} forEach f_available_languages;

[] spawn {
    if (!hasInterface) exitWith {};
    if (player != player) then {waitUntil {player == player};};
    if (!alive player) then {waitUntil {alive player};};

    _languagesPlayerSpeaks = player getVariable ["f_languages", []];

    switch (playerside) do {
    case west: {
            if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["en"];};
        };
    case east: {
            if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ru"];};
        };
    case independent: {
            if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ar"];};
        };
    case civilian: {
            if (_languagesPlayerSpeaks isEqualTo []) then {_languagesPlayerSpeaks = ["ar"];};
        };
    };
    _languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};

