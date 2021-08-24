// starts the second phase of objectives for OPFOR

[
	EAST, 
	"east_find_researchers", 
	["The researchers seem to have abandoned the facility. Search the facility for nay clues as to where they may have gone.", "Find Missing Researchers", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"search", 
	true 
] call BIS_fnc_taskCreate;

// do some other shit to start spawning more bands of cultists