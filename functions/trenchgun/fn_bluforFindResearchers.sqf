// starts the second phase of objectives for BLUFOR

[
	WEST, 
	"west_find_researchers", 
	["Our inside man isn't at the research facility. None of the researchers are. If the researchers left, then maybe our man went with them.", "Find Missing Researchers", ""], 
	[objNull], 
	"CREATED", 
	10, 
	true, 
	"search", 
	true 
] call BIS_fnc_taskCreate;