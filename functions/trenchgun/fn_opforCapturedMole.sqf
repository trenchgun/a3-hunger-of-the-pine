// used to add a completed objective if BLUFOR secures at least one researcher

[
	EAST, 
	"east_captured_mole", 
	["You managed to the CIA mole. Our friends at the KGB will enjoy interrogating him.", "Captured Mole", ""], 
	[objNull], 
	"SUCCEEDED", 
	10, 
	true, 
	"meet", 
	true 
] call BIS_fnc_taskCreate;