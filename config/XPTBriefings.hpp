// Mission briefings
// Config method of creating custom briefings
/*
	CONFIG BRIEFING EXAMPLE
	The following config is an example of how your briefing should be written
	
	class example	// Config class. Used when calling XPT_fnc_briefingCreate. Needs to be unique.
	{
		category = "Diary";		// Category that the briefing goes in. Use "Diary" for the default briefing class
		entryName = "Title";	// Briefing title. This is usually something like "Situation", "Mission", "Assets", etc.
		entryText = "Text";		// Briefing text. Formatted as structured text, contains the contents of your briefing.
		onStart = 1;			// Briefing on start. Determines if the briefing should be created upon mission start. Set to 0 to disable.
		sides[] = {-1,0,1,2,3,4};	// Briefing sides. Determines which sides will receive the briefing message on mission start. Good for TvTs.
	};
	
	Briefings will appear ordered from bottom to top as they're listed here.
	This is because the game adds new briefings to the top of the list, and the template adds the briefings from top to bottom.
	
	The "sides" array is used to limit the briefing to specific players, details are below:
		(-1): All players, regardless of side
		(0): BLUFOR players
		(1): OPFOR players
		(2): INDEPENDENT players
		(3): CIVILIAN players
		(4): LOGIC players (zeus units mostly)
*/

class briefings
{
	// Uncomment the briefings below if you intend to use them for your mission.
	
	class meta	// Example assets briefing. Should include a list of all friendly vehicle assets available.
	{
		category = "Diary";
		entryName = "META";
		entryText = "This op relies on a certain level of roleplay. Be sure to listen to the orders given to you by your commanders and OBSERVE THE ROE they give you (make sure you ID targets and get the clear from command). Commanders have extra intel that will help them make decisions. The intel only counts if its loaded INSIDE the vehicle.</br></br>Other things to note: INTEL is ACE interactable objects that you can carry and load into vehicles. Check objects like computers, servers, hard drives to see if you can ACE Interact + carry them. The default bind to toggle CUP flashlight/laser is CTRL+L. Be smart with your laser and flashlight.";
		onStart = 1;
		sides[] = {-1};
	};
	class assets	// Example assets briefing. Should include a list of all friendly vehicle assets available.
	{
		category = "Diary";
		entryName = "Assets";
		entryText = "You have limited, non-respawning assets for this mission. Each of these vehicles serves as a mobile respawn should you need it. Each team has its own vehicle that they can respawn on. Each team can always respawn on the command vehicle.";
		onStart = 1;
		sides[] = {-1};
	};
	class opfor_mission	// Example mission briefing. Should include a brief overview of the player's tasks.
	{
		category = "Diary";
		entryName = "OPFOR Mission";
		entryText = "Spetsnaz teams are to enter the Nadbor Exclusion Zone and establish contact with Vostok Research Station and, failing that, recover as much of their research data as possible.<br/><br/>Any non-research or non-uniformed personnel encountered inside the zone are deemed hostile and should be destroyed with extreme prejudice.";
		onStart = 1;
		sides[] = {1};
	};
	class opfor_situation	// Example situation briefing. Should include a bit of backstory to your mission.
	{
		category = "Diary";
		entryName = "Situation";
		entryText = "6 hours ago we recieved a distress call from Vostok Station, a small reseach facility. Spetsnaz group ZILANT has been activated to respond.";
		onStart = 1;
		sides[] = {1};
	};
	class blufor_mission	// Example mission briefing. Should include a brief overview of the player's tasks.
	{
		category = "Diary";
		entryName = "Mission";
		entryText = "CIA teams are to enter the Nadbor Exclusion Zone and make contact with their inside man, Dobromil Kubik, and extract him. If the opportunity arises, Langley is apparently very interested in the research the Russians were doing. Steal it.<br/><br/>Any non-research or non-uniformed personnel encountered inside the zone are deemed hostile and should be destroyed with extreme prejudice.";
		onStart = 1;
		sides[] = {0};
	};
	class blufor_situation	// Example situation briefing. Should include a bit of backstory to your mission.
	{
		category = "Diary";
		entryName = "Situation";
		entryText = "6 hours ago we lost contact with an undercover agent at a Russian research station. The CIA has activated Task Force PAPA BEAR to respond.";
		onStart = 1;
		sides[] = {0};
	};
	
};