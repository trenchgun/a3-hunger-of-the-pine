// called via HoldAction either commander to end the mission.
// checks what objectives have been completed and ends mission accordingly

// check if BLUFOR saved their inside man
if ((["west_investigate_safehouses"] call BIS_fnc_taskState) == "SUCCEEDED") then {
	bluforRescueMole = "Blufor successfully rescued their inside man. ";
};

if ((["west_investigate_safehouses"] call BIS_fnc_taskState) == "FAILED") then {
	bluforRescueMole = "Blufor's inside man was killed. ";
};

// check if BLUFOR stole any scientists
if (["west_secured_researcher"] call BIS_fnc_taskExists) then {
	if ((["west_secured_researcher"] call BIS_fnc_taskState) == "SUCCEEDED") then {
		bluforNabResearcher = "They managed to kidnap Russian researcher(s). ";
	};
};

// check if BLUFOR stole any research
_bluforVics = [west_respawn_command, west_respawn_1, west_respawn_2, west_respawn_3, west_respawn_4, west_respawn_5, west_respawn_6];
_bluforVics = _bluforVics inAreaArray bluforIntelCheck;
_bluforIntelScore = [_bluforVics, WEST] call TG_fnc_checkForIntel;
bluforStealResearch = format ["Blufor managed to steal %1 piece(s) of intel. ", _bluforIntelScore];

// check if OPFOR captured the mole
if ((["east_captured_mole"] call BIS_fnc_taskState) == "SUCCEEDED") then {
	bluforRescueMole = "OPFOR captured the CIA mole. The KGB will enjoy interrogating him. ";
};

// check if OPFOR rescued any researchers
if ((["east_find_researchers"] call BIS_fnc_taskState) == "SUCCEEDED") then {
	opforRescueResearcher = "They managed to rescue at least some of the researchers. ";
};

// check if OPFOR purged the researchers (or if they died)
if ((["east_purge_researcher"] call BIS_fnc_taskState) == "SUCCEEDED") then {
	opforPurgeResearcher = "They decided to purge the researchers. They completed this task thouroughly. ";
};

// check if OPFOR secured any research
_opforVics = [east_respawn_command, east_respawn_1, east_respawn_2, east_respawn_3, east_respawn_4, east_respawn_5, east_respawn_6];
_opforVics = _opforVics inAreaArray opforIntelCheck;
_opforIntelScore = [_opforVics, EAST] call TG_fnc_checkForIntel;
opforSecureResearch = format ["Opfor managed to steal %1 piece(s) of intel. ", _opforIntelScore];

// after all evaluations done, concatenate objective string and end mission
objectiveEndString = [bluforRescueMole, bluforNabResearcher, bluforStealResearch, opforCaptureMole, opforRescueResearcher, opforPurgeResearcher, opforSecureResearch] joinString "";
publicVariable "objectiveEndString";

["Mission Ending"] remoteExec ["hint", 0, true];

"ending1" call BIS_fnc_endMissionServer;

//["ending1"] remoteExec ["BIS_fnc_endMission", 0, true];