// used to add an objective if BLUFOR discovers OPFOR

[
	EAST, 
	"east_analyze_cultists", 
	["What's with all these creepy scavengers? It's probably worth finding out what's going on.", "Investigate Cultists", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"search", 
	true 
] call BIS_fnc_taskCreate;