// Functions library
// Defines custom functions for the mission. Anything that needs to be called more than once should be a function
// https://community.bistudio.com/wiki/Functions_Library_(Arma_3)

// If you need to add additional functions, create a new section below using your tag of choice (Ex: SXP = Superxpdude)
// See the functions library wiki page for additional details

/*
class EX // Function TAG, used for the first part of the function name
{
	class example // Function category, defines the folder that the file is located in
	{
		class example {}; // Function class. Defines the file 
	};
};
*/

class TG
{
	class trenchgun
	{
		// utility scripts
		class toggleLight {}; // used to easily toggle lights for the 9-lights puzzle
		class resetLights {}; // used to reset light puzzle
		class carrySmall {}; // applies ace drag/carry to a small object
		class carryMedium {}; // same as above, but for medium objects
		class carryLarge {}; // for large objects
		class spawnZombie {}; // spawns a handful of zombies at given location
		class checkForIntel {}; // returns true if any intel object is in passed array
		class secureResearcher {}; // adds intel if researcher is secured
		
		// objective flow scripts (OPFOR)
		class opforFindResearchers {}; // creates objective to find researchers
		class opforFoundBlufor {}; // creates objective when opfor finds blufor
		class opforFoundIndep {}; // creates objective when opfor finds indep 
		class opforCapturedMole {}; // creates completed objective if opfor captures mole
		class opforPurgedResearchers {}; // creates hidden objective when all researchers die
		
		// objective flow scripts (BLUFOR)
		class bluforFindResearchers {}; // creates objective to find researchers
		class bluforFoundOpfor {}; // creates objective when blufor finds opfor
		class bluforFoundIndep {}; // creates objective when blufor finds indep
		class bluforSecuredResearcher {}; // creates completed objective if blufor nabs a researcher
		
		class endMission {}; // called by either commander to end mission
		class startSummoning {}; // starts end situation
		class summonHell {}; // starts end trigger if things get bad
	};
};