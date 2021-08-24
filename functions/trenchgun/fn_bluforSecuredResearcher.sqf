// used to add a completed objective if BLUFOR secures at least one researcher

[
	WEST, 
	"west_secured_researcher", 
	["You managed to nab at least one of the researchers, good work. They'll provide valuable intel.", "Secure Researcher", ""], 
	[objNull], 
	"SUCCEEDED", 
	10, 
	true, 
	"meet", 
	true 
] call BIS_fnc_taskCreate;