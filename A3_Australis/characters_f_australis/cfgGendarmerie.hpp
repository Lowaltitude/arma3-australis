//Arma 3 Australis Characters_F_Australis cfgGendarmerie.hpp

/*Gendarmerie > Men (Field)*/
class Australis_B_G_Man_Base_F: B_Soldier_base_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_GEN_F;
	editorSubcategory = EdSubCat_Personnel_Field;
	genericNames = TanoanMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_Tanoan
	};
};
class Australis_B_G_Soldier_base_F: Australis_B_G_Man_Base_F
{
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
};

class Australis_B_G_Soldier_Recon_Base_F: Australis_B_G_Soldier_Base_F
{
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_SF_s};
            speechPlural[] = {veh_infantry_SF_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
	items[] =
	{
		FirstAidKit,
		optic_NVS
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_NVS
	};
	vehicleClass = MenRecon;
	canHideBodies = false;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};

//	Rifleman
class Australis_B_G_Soldier_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_B_H_Soldier_2_F;
	backpack = B_TacticalPack_oli;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_Cap_oli,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_Cap_oli,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		Aegis_arifle_M4A1_short_holo_flash_F,
		hgun_ABPM3_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_short_holo_flash_F,
		hgun_ABPM3_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};

//	Officer
class Australis_B_G_Officer_F: Australis_B_G_Soldier_base_F
{
	author = $STR_A3_A_Lowaltitude;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = Atlas_U_B_H_Soldier_2_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_holster_black_F,
		H_Beret_gen_F,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_holster_black_F,
		H_Beret_gen_F,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		SMG_05_F_ICO_flash_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F_ICO_flash_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
		mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02),
		mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 600000;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_Tanoan,
		G_NATO_casual
	};
};

// Paramedic
class Australis_B_G_Recon_Medic_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Recon_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Recon_Medic_F0;
	uniformClass = Atlas_U_B_H_Soldier_2_F;
	backpack = B_AssaultPack_aucamo_ReconMedic_F;
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
		Aegis_arifle_M4A1_short_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
		Aegis_arifle_M4A1_short_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
    };
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_Cap_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_Cap_oli,
		DefaultManLinkedItems
	};
};

//	Scout
class Australis_B_G_Recon_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Recon_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Recon_F0;
	uniformClass = Atlas_U_B_H_Soldier_2_F;
	weapons[] =
    {
        Aegis_arifle_M4A1_grip_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
       	Aegis_arifle_M4A1_grip_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
    	mag_10(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_SmershVest_01_F,
		Atlas_H_MilCap_nohs_jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		Atlas_H_MilCap_nohs_jungle,
		DefaultManLinkedItems
	};
};

//Grenadier
class Australis_B_G_Recon_GL_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Recon_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_Recon_GL_F0;
	backpack = B_TacticalPack_oli;
	uniformClass = Atlas_U_B_H_Soldier_F;
	cost = 200000;
	role = Grenadier;
	weapons[] =
    {
        Aegis_arifle_M4A1_GL_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_M4A1_GL_holo_flash_F,
		hgun_ABPM3_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(16Rnd_9x21_Mag_v2),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
};

//	Autorifleman
class Australis_B_G_Recon_AR_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Recon_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_Recon_AR_F0;
	uniformClass = Atlas_U_B_H_Soldier_F;;
	backpack = B_Kitbag_rgr;
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = 
	{
		1,
		0.1,
		0.3
	};
	weapons[] =
    {
        LMG_03_F_holo_flash_F,
       	hgun_ABPM3_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_03_F_holo_flash_F,
       	hgun_ABPM3_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_556x45_Box_F),
		mag_2(16Rnd_9x21_Mag_v2),
        MiniGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_556x45_Box_F),
		mag_2(16Rnd_9x21_Mag_v2),
        MiniGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_Bandanna_khk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_Bandanna_khk,
		DefaultManLinkedItems
	};
};

//	Marksman
class Australis_B_G_Recon_M_F: Australis_B_G_Soldier_Recon_Base_F
{
	author = $STR_A3_A_Lowaltitude;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Recon_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Recon_M_F0;
	uniformClass = Atlas_U_B_H_Soldier_2_F;
	cost = 250000;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	threat[] = 
	{
		1,
		0.1
		,0.3
	};
	weapons[] =
    {
        arifle_SLR_V_lxWS_AMS_F,
       	hgun_G17_black_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SLR_V_lxWS_AMS_F,
       	hgun_G17_black_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_PatrolBooniehat_jungle_F,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_PatrolBooniehat_jungle_F,
		ItemGPS,
		DefaultManLinkedItems
	};
};
