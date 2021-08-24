// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Call the template initServer function
[] call XPT_fnc_initServer; // DO NOT CHANGE THIS LINE

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";



//////////////////////////////////////////////////////////
///// Add any mission specific code after this point /////
//////////////////////////////////////////////////////////

// Create a list of mission objects that should not be curator editable
XPT_blacklistedMissionObjects = [];

west setFriend [east, 1];
east setFriend [west, 1];

/******************************** 
* global vars for mission stats *
********************************/ 
bluforRescueMole = "Blufor failed to find their inside man. "; publicVariable "bluforRescueMole";
bluforNabResearcher = "They did not manage to kidnap any of the Russian researchers. "; publicVariable "bluforNabResearcher";
bluforStealResearch = "They did not manage to steal research from the station. "; publicVariable "bluforStealResearch";
bluforIntelGathered = 0; publicVariable "bluforIntelGathered";

opforCaptureMole = "Opfor failed to locate or capture the CIA mole. They may have never even known about him. "; publicVariable "opforCaptureMole";
opforRescueResearcher = "They did not rescue any of their researchers. "; publicVariable "opforRescueResearcher";
opforPurgeResearcher = ""; publicVariable "opforPurgeResearcher";
opforSecureResearch = "They did not manage to secure any research from the station. "; publicVariable "opforSecureResearch";
opforIntelGathered = 0; publicVariable "opforIntelGathered";

objectiveEndString = ""; publicVariable "objectiveEndString";
 
// keep track of what hostages have been saved
moleSecured = false; publicVariable "moleSecured";
researcher5Secured = false; publicVariable "researcher5Secured";
researcher6Secured = false; publicVariable "researcher6Secured";
researcher7Secured = false; publicVariable "researcher7Secured";

summoningStarted = false;
publicVariable "summoningStarted";

/***************************
* set up vic respawn OPFOR *
***************************/
[east, east_respawn_command, "ZILANT"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_1, "BODARK 1"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_2, "BODARK 2"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_3, "BODARK 3"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_4, "VEDMAK 1"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_5, "VEDMAK 2"] call BIS_fnc_addRespawnPosition;
[east, east_respawn_6, "VEDMAK 3"] call BIS_fnc_addRespawnPosition;

/****************************
* set up vic respawn BLUFOR *
****************************/
[west, west_respawn_command, "PAPA BEAR"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_1, "DELTA 1"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_2, "DELTA 2"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_3, "DELTA 3"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_4, "GREEN 1"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_5, "GREEN 2"] call BIS_fnc_addRespawnPosition;
[west, west_respawn_6, "GREEN 3"] call BIS_fnc_addRespawnPosition;

// set up flamer stuff
#include "AL_flamer\functions_flame.hpp"

/***********************************************
* set up random spawn for MOLE and RESEARCHERS *
***********************************************/
// sets all hostages to renegade so that purging them doesnt cause friendly fire issues
researcher1 addRating -10000;
researcher2 addRating -10000;
researcher3 addRating -10000;
researcher4 addRating -10000;
researcher5 addRating -10000;
researcher6 addRating -10000;
researcher7 addRating -10000;
MOLE addRating -10000;
sacrifice_1 addRating -10000;
sacrifice_2 addRating -10000;
sacrifice_3 addRating -10000;
sacrifice_4 addRating -10000;
cultist_1 addRating -10000;
cultist_2 addRating -10000;
cultist_3 addRating -10000;
cultist_4 addRating -10000;
cultist_5 addRating -10000;
cultist_6 addRating -10000;
cultist_7 addRating -10000;
cultist_8 addRating -10000;

_moleLocation = selectRandom [mole_spawn1, mole_spawn2, mole_spawn3, mole_spawn4, mole_spawn5, mole_spawn6, mole_spawn7];
MOLE setPosASL (getPosASL _moleLocation);
// check if spawning in safe location
if ((_moleLocation isEqualTo mole_spawn1) || (_moleLocation isEqualTo mole_spawn6) || (_moleLocation isEqualTo mole_spawn7)) then {
	[MOLE, false] remoteExec ["ACE_captives_fnc_setHandcuffed",0,true];
	removeHeadgear MOLE;
};

_researcher5Location = selectRandom [researcher5_spawn1, researcher5_spawn2, researcher5_spawn3, researcher5_spawn4];
_researcher6Location = selectRandom [researcher6_spawn1, researcher6_spawn2, researcher6_spawn3, researcher6_spawn4];
_researcher7Location = selectRandom [researcher7_spawn1, researcher7_spawn2, researcher7_spawn3, researcher7_spawn4];
researcher5 setPosASL (getPosASL _researcher5Location);
researcher6 setPosASL (getPosASL _researcher6Location);
researcher7 setPosASL (getPosASL _researcher7Location);

// hide summoning ritual stuff
statue_1 hideObjectGlobal true;
statue_2 hideObjectGlobal true;
statue_3 hideObjectGlobal true;
statue_4 hideObjectGlobal true;
statue_5 hideObjectGlobal true;
statue_6 hideObjectGlobal true;
statue_7 hideObjectGlobal true;
statue_8 hideObjectGlobal true;
rock_1 hideObjectGlobal true;
rock_2 hideObjectGlobal true;
rock_3 hideObjectGlobal true;
rock_4 hideObjectGlobal true;
rock_5 hideObjectGlobal true;
sacrifice_1 hideObjectGlobal true;
sacrifice_2 hideObjectGlobal true;
sacrifice_3 hideObjectGlobal true;
sacrifice_4 hideObjectGlobal true;
skull hideObjectGlobal true;
cultist_1 hideObjectGlobal true;
cultist_2 hideObjectGlobal true;
cultist_3 hideObjectGlobal true;
cultist_4 hideObjectGlobal true;
cultist_5 hideObjectGlobal true;
cultist_6 hideObjectGlobal true;
cultist_7 hideObjectGlobal true;
cultist_8 hideObjectGlobal true;

