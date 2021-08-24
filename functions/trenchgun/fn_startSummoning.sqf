// start the summoning process

// lightning strike the location

// do the ground shake thing


// add new objective to stop summoning, 5 minutes
[
	true, 
	"all_stop_summoning", 
	["The cultists have done something. You need to put a stop to it.", "Stop the Summoning Ritual", ""], 
	[skull], 
	"CREATED", 
	10, 
	true, 
	"danger", 
	true 
] call BIS_fnc_taskCreate;


// unhide the summoning objects
statue_1 hideObjectGlobal false;
statue_2 hideObjectGlobal false;
statue_3 hideObjectGlobal false;
statue_4 hideObjectGlobal false;
statue_5 hideObjectGlobal false;
statue_6 hideObjectGlobal false;
statue_7 hideObjectGlobal false;
statue_8 hideObjectGlobal false;
rock_1 hideObjectGlobal false;
rock_2 hideObjectGlobal false;
rock_3 hideObjectGlobal false;
rock_4 hideObjectGlobal false;
rock_5 hideObjectGlobal false;
sacrifice_1 hideObjectGlobal false;
sacrifice_2 hideObjectGlobal false;
sacrifice_3 hideObjectGlobal false;
sacrifice_4 hideObjectGlobal false;
skull hideObjectGlobal false;
cultist_1 hideObjectGlobal false;
cultist_2 hideObjectGlobal false;
cultist_3 hideObjectGlobal false;
cultist_4 hideObjectGlobal false;
cultist_5 hideObjectGlobal false;
cultist_6 hideObjectGlobal false;
cultist_7 hideObjectGlobal false;
cultist_8 hideObjectGlobal false;

// init spooky floating objects
null = [rock_1, 0.7, false, 1000] execVM "AL_floating_mountain\rotate_animate.sqf";
null = [rock_2, 0.6, true, 1000] execVM "AL_floating_mountain\rotate_animate.sqf";
null = [rock_3, 0.5, false, 1000] execVM "AL_floating_mountain\rotate_animate.sqf";
null = [rock_4, 0.8, true, 1000] execVM "AL_floating_mountain\rotate_animate.sqf";
null = [rock_5, 0.6, false, 1000] execVM "AL_floating_mountain\rotate_animate.sqf";


if (!moleSecured) then {
	MOLE setPosASL (getPosASL summon_mole);
};

if (!researcher5Secured) then {
	researcher5 setPosASL (getPosASL summon_5);
};

if (!researcher6Secured) then {
	researcher6 setPosASL (getPosASL summon_6);
};

if (!researcher7Secured) then {
	researcher7 setPosASL (getPosASL summon_7);
};

// set summoning started to true
summoningStarted = true;
publicVariable "summoningStarted";

[4] call BIS_fnc_earthquake;