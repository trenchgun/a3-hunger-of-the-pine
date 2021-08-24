// used to add a completed objective if BLUFOR secures at least one researcher

[
	EAST, 
	"east_rescue_researcher", 
	["you managed to save at least one of the researchers. Good job.", "Rescued Researcher(s)", ""], 
	[objNull], 
	"SUCCEEDED", 
	10, 
	true, 
	"meet", 
	true 
] call BIS_fnc_taskCreate;