// decides what intel to give to what side when given researcher is secured
/*
*	PARAMS:
*	0 = calling unit
*	1 = researcher being secured (researcher5, researcher6, or researcher7)
*/

_unit = _this select 0;
_researcher = _this select 1;

_side = side _unit;
_group = group _unit;

switch (_researcher) do {
	case researcher5: {
		// record that the researcher 5 has been found
		researcher5Secured = true;
		publicVariable "researcher5Secured";
		removeHeadgear researcher5;
		
		// check if he's alive
		if (alive researcher5) then {
			"Researcher secured. His name is Petr Pernica." remoteExec ["hint", _group];
			
			if (_side isEqualTo EAST) then {
				// thankful to be found by russians
				["Petr Pernica", "Thank God you're here. I don't know what these freaks were going to do to me. They captured me when they attacked Vostok Station. My colleagues may have been captured as well."] remoteExec ["BIS_fnc_showSubtitle", _group];
			};
			if (_side isEqualTo WEST) then {
				// dont know who americans are, but still thankful
				["Petr Pernica", "Thank God you're here. I don't know what these freaks were going to do to me. They captured me when they attacked Vostok Station. My colleagues may have been captured as well."] remoteExec ["BIS_fnc_showSubtitle", _group];
				//"Who are you? Are you here to rescue me? Thank God, I don't know what these freaks were going to do to me. They captured me when they atacked our research station. Some of my colleagues may have been captured as well." remoteExec ["systemChat", _group];
			};
		} else {
			"Researcher secured. He's dead. His ID says Petr Pernica." remoteExec ["hint", _group];
		};
	};
	case researcher6: {
		// record that the researcher 6 has been found
		researcher6Secured = true;
		publicVariable "researcher6Secured";
		removeHeadgear researcher6;
		
		// check if he's alive
		if (alive researcher6) then {
			"Researcher secured. His name is Ladislav Lebeda." remoteExec ["hint", _group];
		
			if (_side isEqualTo EAST) then {
				// thankful to be found by russians
				["Ladislav Lebeda", "My God, I'm sure glad to see you. We were attacked by the scavengers. Before, they were just small groups that our security could handle. But tonight...I don't know where they all came from. It's like they're possessed."] remoteExec ["BIS_fnc_showSubtitle", _group];
			};
			if (_side isEqualTo WEST) then {
				// dont know who americans are, but still thankful
				["Ladislav Lebeda", "Wh-what? Who, who are you? Americans? Why are you here? Ah, just-- thank God you're here. You've got to get me out of here. These cultists, I don't know what they were going to do with me."] remoteExec ["BIS_fnc_showSubtitle", _group];
			};
		} else {
			"Researcher secured. He's dead. His ID says Ladislav Lebeda." remoteExec ["hint", _group];
		};
	};
	case researcher7: {
		// record that the researcher 7 has been found
		researcher7Secured = true;
		publicVariable "researcher7Secured";
		removeHeadgear researcher7;
		
		// check if he's alive
		if (alive researcher7) then {
			"Researcher secured. His name is Jiri Skopek." remoteExec ["hint", _group];
			
			if (_side isEqualTo EAST) then {
				// thankful to be found by russians
				["Jiri Skopek", "Thank God. I knew someone would come for us. Listen, you have to get me out of here. I heard these cultists talking, they want to do some sort of satanic ritual, they're insane."] remoteExec ["BIS_fnc_showSubtitle", _group];
			};
			if (_side isEqualTo WEST) then {
				// dont know who americans are, but still thankful
				["Jiri Skopek", "Wh--? You're not Russians...well get me out of here anyway. These freaks are trying to kill me. They captured me from my research station, I don;t know why they didn't just kill me."] remoteExec ["BIS_fnc_showSubtitle", _group];
			};
		} else {
			"Researcher secured. He's dead. His ID says Jiri Skopek." remoteExec ["hint", _group];
		};
	};
	case MOLE: {
		// regardless of the side, mole has been located
		moleSecured = true;
		publicVariable "moleSecured";
		removeHeadgear MOLE;
		
		if (_side isEqualTo WEST) then {
			
			if (alive MOLE) then {
				bluforRescueMole = "Blufor managed to find their inside man, but failed to extract him. ";
				publicVariable "bluforRescueMole";
				"Inside man secured." remoteExec ["hint", _group];
				["Dobromil Kubik", "Thank god you're here. I was worried the Russians would find me. Get me the FUCK out of here."] remoteExec ["BIS_fnc_showSubtitle", _group];
				// create diary entry with MOLE's intel
			} else {
				bluforRescueMole = "Blufor found their inside man, but he was already dead. ";
				publicVariable "bluforRescueMole";
				"Inside man secured. He's dead." remoteExec ["hint", _group];
				// fail Blufor 'Find Mole' objective
				if !("west_investigate_safehouses" call BIS_fnc_taskState isEqualTo "FAILED") then {
					["west_investigate_safehouses", "FAILED"] call BIS_fnc_taskSetState;
				};
			};
		};

		if (_side isEqualTo EAST) then {
			// opfor need to extract mole
			if (alive MOLE) then {
				"Researcher secured. His name is Dobromil Kubik." remoteExec ["hint", _group];
				if (MOLE getVariable ["ace_captives_isHandcuffed", []]) then {
					["Dobromil Kubik", "H-hello. Thank God you're here. I...I left the research station on an errand and got captured by these...scavengers."] remoteExec ["BIS_fnc_showSubtitle", _group];
					//["Dobromil Kubik", "H-hello. Thank God you're here. I...I left the research station on an errand and got captured by these...scavengers."] spawn BIS_fnc_showSubtitle;
					// create diary record of MOLE's fake intel (REALLY suspicious)
					//_side createDiaryRecord ["Intel", "You found some intel."];
				} else {
					["Dobromil Kubik", "Oh God...listen, I don't know what's going on, I didn't do anything! What do you want with me?"] remoteExec ["BIS_fnc_showSubtitle", _group];
					opforCaptureMole = "Opfor found a researcher that was acting suspicious. ";
					publicVariable "opforCaptureMole";
				};
			} else {
				"Researcher secured. He's dead. His ID says Dobromil Kubik." remoteExec ["hint", _group];
			};
		};
	};
	default {hint "this should not happen."};
};