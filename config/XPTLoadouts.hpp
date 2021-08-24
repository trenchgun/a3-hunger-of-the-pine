// XPTloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{	
	/**********************
	*	BLUFOR loadouts   *
	**********************/
	
	// commander
	class B_officer_F
	{
		class base
		{
			displayName = "B_officer_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_43";
			headgearClass = "CUP_H_OpsCore_Grey_SF";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "B_AssaultPack_rgr";
			
			linkedItems[] = {"ItemMap","ItemAndroid","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC152",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"B_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	// CLS
	class B_medic_F
	{
		class base
		{
			displayName = "B_medic_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_38";
			headgearClass = "rhsusf_opscore_coy_cover_pelt";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "B_Kitbag_rgr";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"B_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {{"ACE_personalAidKit",1},{"ACE_fieldDressing",30},{"ACE_epinephrine",20},{"ACE_morphine",15},{"ACE_bloodIV",2},{"ACE_bloodIV_500",6}};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	// squad lead
	class B_Soldier_SL_F
	{
		class base
		{
			displayName = "B_Soldier_SL_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_43";
			headgearClass = "rhsusf_opscore_mc_cover_pelt_cam";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "B_AssaultPack_rgr";
			
			linkedItems[] = {"ItemMap","ItemAndroid","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC343",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"B_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	// team lead
	class B_Soldier_TL_F
	{
		class base
		{
			displayName = "B_Soldier_TL_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_43";
			headgearClass = "rhsusf_opscore_mc_cover_pelt_cam";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "B_AssaultPack_rgr";
			
			linkedItems[] = {"ItemMap","ItemAndroid","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC343",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"B_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	// rto
	class B_Soldier_A_F
	{
		class base
		{
			displayName = "B_Soldier_A_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_40";
			headgearClass = "rhsusf_opscore_mc_cover_pelt_cam";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC152",1}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	
	// operator
	class B_Soldier_F
	{
		class base
		{
			displayName = "B_Soldier_F";
			
			primaryWeapon[] = {"rhs_weap_m4a1_mstock","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","rhsusf_acc_eotech",{"CUP_30Rnd_556x45_PMAG_QP",30},{},"rhsusf_acc_kac_grip"};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "ACE_Vector";
			
			uniformClass = "CUP_I_B_PMC_Unit_40";
			headgearClass = "rhsusf_opscore_mc_cover_pelt_cam";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "CUP_V_B_Ciras_Khaki";
			backpackClass = "B_AssaultPack_rgr";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_MX991",1},{"CUP_30Rnd_556x45_PMAG_QP",7,30},{"Chemlight_blue",6,1},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_wirecutter",1},{"ACE_EntrenchingTool",1},{"B_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "CUP_I_B_PMC_Unit_36"; };
		class rand_2 : base { uniformClass = "CUP_I_B_PMC_Unit_37"; };
		class rand_3 : base { uniformClass = "CUP_I_B_PMC_Unit_38"; };
		class rand_4 : base { uniformClass = "CUP_I_B_PMC_Unit_39"; };
		class rand_5 : base { uniformClass = "CUP_I_B_PMC_Unit_40"; };
		class rand_6 : base { uniformClass = "CUP_I_B_PMC_Unit_41"; };
		class rand_7 : base { uniformClass = "CUP_I_B_PMC_Unit_42"; };
		class rand_8 : base { uniformClass = "CUP_I_B_PMC_Unit_43"; };
	};
	
	/*********************
	*	OPFOR loadouts   *
	*********************/
	
	// commander
	class O_officer_F
	{
		class base
		{
			displayName = "O_officer_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_opscore_ut_pelt_nsw_cam";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "B_AssaultPack_khk";
			
			linkedItems[] = {"ItemMap","ItemcTab","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC152",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"O_R_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
	
	// CLS
	class O_medic_F
	{
		class base
		{
			displayName = "O_medic_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_opscore_ut_pelt_nsw";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "B_Kitbag_rgr";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"O_R_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {{"ACE_personalAidKit",1},{"ACE_fieldDressing",30},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_bloodIV_500",6},{"ACE_bloodIV",2}};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
	
	// SL
	class O_Soldier_SL_F
	{
		class base
		{
			displayName = "O_Soldier_SL_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_mich_bare_norotos_arc_alt_tan";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "B_AssaultPack_khk";
			
			linkedItems[] = {"ItemMap","ItemAndroid","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC343",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"O_R_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
	
	// TL
	class O_Soldier_TL_F
	{
		class base
		{
			displayName = "O_Soldier_TL_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_mich_bare_norotos_arc_alt_semi";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "B_AssaultPack_khk";
			
			linkedItems[] = {"ItemMap","ItemAndroid","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC343",1}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"O_R_IR_Grenade",4,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
	
	// rto
	class O_Soldier_A_F
	{
		class base
		{
			displayName = "O_Soldier_A_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_mich_bare_norotos_arc_alt_tan";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17},{"ACRE_PRC152",1}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
	
	// operator
	class O_Soldier_F
	{
		class base
		{
			displayName = "O_Soldier_F";
			
			primaryWeapon[] = {"CUP_arifle_AK105_railed","","CUP_acc_LLM","optic_ACO_grn",{"CUP_30Rnd_545x39_AK_M",30},{},""};
			secondaryWeapon[] = {};
			handgunWeapon[] = {"rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","CUP_acc_CZ_M3X","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""};
			binocular = "rhs_pdu4";
			
			uniformClass = "U_O_R_Gorka_01_F";
			headgearClass = "rhsusf_mich_bare_norotos_arc_alt_tan";
			facewearClass = "CUP_PMC_Facewrap_Black";
			vestClass = "V_SmershVest_01_radio_F";
			backpackClass = "B_AssaultPack_khk";
			
			linkedItems[] = {"ItemMap","ItemMicroDAGR","ItemRadioAcreFlagged","ItemCompass","ItemWatch","rhs_1PN138"};
			
			uniformItems[] = {{"ItemcTabHCam",1},{"Chemlight_red",6,1},{"ACRE_PRC343",1}};
			vestItems[] = {{"ACE_Flashlight_KSF1",1},{"CUP_30Rnd_545x39_AK_M",7,30},{"rhsusf_mag_17Rnd_9x19_FMJ",3,17}};
			backpackItems[] = {{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_wirecutter",1},{"O_R_IR_Grenade",4,1},{"Chemlight_red",6,1},{"SmokeShell",4,1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",1},{"ACE_adenosine",2},{"ACE_tourniquet",1}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
		};
		class rand_1 : base { uniformClass = "U_O_R_Gorka_01_brown_F"; };
		class rand_2 : base { uniformClass = "U_O_R_Gorka_01_camo_F"; };
		class rand_3 : base { uniformClass = "tg_u_gorka_klmk"; };
		class rand_4 : base { uniformClass = "tg_u_gorka_klmk_alt"; };
		class rand_5 : base { uniformClass = "tg_u_gorka_partizan_autumn"; };
		class rand_6 : base { uniformClass = "tg_u_gorka_partizan_autumn_alt"; };
		class rand_7 : base { uniformClass = "tg_u_gorka_partizan"; };
		class rand_8 : base { uniformClass = "tg_u_gorka_partizan_alt"; };
	};
};