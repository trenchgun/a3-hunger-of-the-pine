// this script spawns a handful of zombies on the passed location
_pos = _this select 0;

if (alive zombieSpawner) then {
	[
	getPos _pos, 
	independent, 
	["RyanZombie15slow", "RyanZombie18slow", "RyanZombie21slow", "RyanZombie24slow", "RyanZombie25slow", "RyanZombie28slow", "RyanZombieC_man_hunter_1_Fslow"],
	[],
	[],
	[],
	[],
	[],
	selectRandom[0,45,90,135,180,225,270,315]
	] call BIS_fnc_spawnGroup;
};
