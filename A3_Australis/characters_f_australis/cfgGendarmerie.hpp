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
class Australis_B_G_Soldier_F: Australis_B_G_Soldier_base_F
{
	author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_srd_F,
		H_HelmetHBK_aucamo_srd_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_srd_F,
		H_HelmetHBK_aucamo_srd_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_green_Holo_Pointer_F,
		hgun_ABPM3_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_green_Holo_Pointer_F,
		hgun_ABPM3_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};