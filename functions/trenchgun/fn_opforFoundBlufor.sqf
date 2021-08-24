// used to add an objective if OPFOR discovers BLUFOR

[
	EAST, 
	"east_analyze_opposition", 
	["You've detected another military force at work in the area. Work to determine their agenda, if they are enemies or potential allies.", "Analyze Opposing Force", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"intel", 
	true 
] call BIS_fnc_taskCreate;
