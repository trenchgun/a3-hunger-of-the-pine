// starts mission end situation
null=["worm_1"] execvm "AL_worm\worm.sqf";

// only want this to happen if at least one of the summoners is alive:
if ((alive cultist_1) || (alive cultist_2) || (alive cultist_3) || (alive cultist_4) || (alive cultist_5) || (alive cultist_6) || (alive cultist_7) || (alive cultist_8)) then {
	
	// spawn demon worms
	null=["worm_2"] execvm "AL_worm\worm.sqf";
	null=["worm_3"] execvm "AL_worm\worm.sqf";
	null=["worm_4"] execvm "AL_worm\worm.sqf";
	null=["worm_5"] execvm "AL_worm\worm.sqf";
	null=["worm_6"] execvm "AL_worm\worm.sqf";
	null=["worm_7"] execvm "AL_worm\worm.sqf";
	null=["worm_8"] execvm "AL_worm\worm.sqf";
	null=["worm_9"] execvm "AL_worm\worm.sqf";
	null=["worm_10"] execvm "AL_worm\worm.sqf";
	
	// create objective: escape
	[
		true, 
		"all_exfil_bad", 
		["Fuck this. Get the fuck out of here with whatever you can and RTB.", "Escape", ""], 
		[objNull], 
		"CREATED", 
		10, 
		true, 
		"exit", 
		true 
	] call BIS_fnc_taskCreate;
} else {
		["all_stop_summoning", "FAILED"] call BIS_fnc_taskSetState;
		[
		true, 
		"all_exfil_good", 
		["We managed to partially stop the summoning. Now get the hell away from that thing and RTB", "Exfil", ""], 
		[objNull], 
		"CREATED", 
		10, 
		true, 
		"exit", 
		true 
	] call BIS_fnc_taskCreate;
};