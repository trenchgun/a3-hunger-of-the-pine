// Task Descriptions
// Can be used for moving task descriptions from script files to configs


// Create new classes under here. BIS_fnc_taskCreate will use either the class passed as the description parameter (in string format)
// The following would be loaded by setting the description to "example";
// If the description is blank (""), then the task ID will be used automatically
class example
{
	title = "Example Task Title";					// Title of task. Displayed as the task name
	description = "Example Task Description";		// Description of task. Additional details displayed when the task is selected on the map screen.
	marker = "";									// Task marker. Leave blank
};

/*
----- OPFOR tasks -----
*/

class OPFOR_secret_1
{
	title = "SECRET OBJ: Research Recovery";
	description = "The recovery of ANY and ALL research data from the project the facility was working on is of CRITICAL IMPORTANCE to Moscow. If you come across computers, laptops, servers, file cabinets, ANYTHING that could hold information on the research project, take it.";
	marker = "";
};

class OPFOR_secret_2
{
	title = "SECRET OBJ: Find the Mole";					
	description = "GRU intel suggests that there was an American mole at the research station. They are unsure if this mole had anything to do with the loss of communication. It may have been the volatile nature of the research. IF there is evidence that a mole existed, ANY surviving researcher is to be PURGED IMMEDIATELY. Recovering research is still the TOP PRIORITY.";		
	marker = "";									
};

class OPFOR_secret_3
{
	title = "SECRET OBJ: Possible Contact";
	description = "Since we believe there might have been a mole at the research station, be wary of foreign intervention. However, if foreign forces are encountered, standard ROE is: YOU MAY ONLY FIRE IF FIRED UPON. That being said, Moscow REALLY wants ALL research and personnel from this station, so do NOT just let a foreign actor seize any materiel. Defend your intel and try to steal enemy intel if possible. Engaging with foreign actors is ultimately your decision, but should be a last resort. This operation should not become the start of a shooting war between East and West, but that doesn't mean you can't use subterfuge. You are encouraged to be cheeky.";
	marker = "";
};

class OPFOR_secret_4
{
	title = "SECRET OBJ: Legality";
	description = "A corollary to the previous point: your teams are entering the Nadbor Exclusion Zone, a no-mans land, but NOT under Russian jurisdiction. You have NO legal right to be there, and there will be NO BACKUP. Your soldiers are not wearing anything that would identify them as Russian soldiers. Inform them that if asked, they are MERCENARIES HIRED TO EXTRACT SOMEONE FROM THE EXCLUSION ZONE.";
	marker = "";
	
};

/*
----- BLUFOR tasks -----
*/

class BLUFOR_secret_1
{
	title = "SECRET OBJ: Research";
	description = "If it's not already obvious, our man may have been found out. That is the most likely reason the spooks stopped receiving comms from him. But the CIA wouldn’t send us in to recover a discovered spy, they would rather have the deniability. What they really want is the research, the data he was sending them. They want all the intel they can get. That means grab any computers, servers, files, etc. you can find from the research facility or anywhere else.";
	marker = "";
};

class BLUFOR_secret_2
{
	title = "SECRET OBJ: Snatch & Grab";
	description = "While we are here primarily for our inside man, due to the nature of the research being done at this facility, Langley would not protest if the opportunity arose to kidnap a Russian scientist working on this project. If you have the chance, take it. But be smart about it.";
	marker = "";
};

class BLUFOR_secret_3
{
	title = "SECRET OBJ: Possible Contact";
	description = "Since we believe there might have been a mole at the research station, be wary of foreign intervention. However, if foreign forces are encountered, standard ROE is: YOU MAY ONLY FIRE IF FIRED UPON. That being said, Langley REALLY wants ALL research and personnel from this station, so do NOT just let a foreign actor sieze any materiel. Defend your intel and try to steal enemy intel if possible. Engaging with foreign actors is ultimately your decision, but should be a last resort. This operation should not become the start of a shooting war between East and West, but that doesn't mean you can't use subterfuge. You are encouraged to be cheeky.";
	marker = "";
};

class BLUFOR_secret_4
{
	title = "SECRET OBJ: Legality";
	description = "I'm sure you don't need to be reminded, but this is espionage. We are NOT here legally, and there will be NO backup coming to save you. You're on your own. Russian military shouldn't be here either so any Russian forces you run into might be mercenaries to get around that. You don't have any patches or markings that tie you to the United States, but if for some reason it ever comes up, instruct your men to tell people that you are a MERCENARY COMPANY searching for a VIP.";
	marker = "";
};