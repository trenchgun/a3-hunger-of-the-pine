// this script toggles a light given to it
params ["_light"];

if ((lightIsOn _light) == "ON") then
{
	[_light, "OFF"] remoteExec ["switchLight", 0, true];
	hint "OFF";
} else {
	[_light, "ON"] remoteExec ["switchLight", 0, true];
	hint "ON";
};

