// used to add a completed objective if OPFOr kills all the researchers

[
	EAST, 
	"east_purge_researcher", 
	["The researchers have been purged. Their secrets die with them.", "Purged Researchers", ""], 
	[objNull], 
	"SUCCEEDED", 
	10, 
	true, 
	"kill", 
	true 
] call BIS_fnc_taskCreate;