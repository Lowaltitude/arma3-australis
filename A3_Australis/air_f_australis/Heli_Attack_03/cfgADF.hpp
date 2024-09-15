/* ADF */
class Australis_B_A_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_Lowaltitude;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Heli_Attack_03_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_Heli_Attack_03_F0;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Australis_BLU_AU_F;
	crew = Australis_B_A_Helipilot_F;
	typicalCargo[] = {Australis_B_A_Helipilot_F};
    textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_ADF_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_ADF_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_ADF_CO.paa"
    };
	class Components: Components
	{
		class TransportPylonsComponent
			{
				uiPicture = "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\UI\Heli_Attack_03_EDEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = PylonRack_Missile_BIM9X_helo_x1;
						priority = 5;
						hardpoints[] = {B_ASRAAM};
						turret[] = {0};
						UIposition[] =
                        {
                            0.06,   // X
                            0.4     // Y
                        };
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = PylonRack_12Rnd_missiles;
						priority = 4;
						hardpoints[] =
                        {
                            DAR,
                            DAGR,
                            B_SHIEKER,
                            UNI_SCALPEL,
                            20MM_TWIN_CANNON,
                            B_ASRRAM_EJECTOR
                        };
						UIposition[] =
                        {
                            0.08,   // X
                            0.35    // Y
                        };
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = PylonRack_4Rnd_LG_scalpel;
						priority = 3;
						hardpoints[] =
                        {
                            DAR,
                            DAGR,
                            B_SHIEKER,
                            UNI_SCALPEL,
                            20MM_TWIN_CANNON,
                            B_ASRRAM_EJECTOR
                        };
						UIposition[] =
                        {
                            0.1,    // X
                            0.3     // Y
                        };
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] =
                        {
                            0.59,   // X
                            0.3     // Y
                        };
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] =
                        {
                            0.62,   // X
                            0.35    // Y
                        };
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] =
                        {
                            0.64,   // X
                            0.4     // Y
                        };
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
					class Default
					{
						displayName = $STR_vehicle_default;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_12Rnd_missiles,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
					class AT
					{
						displayName = $STR_A3_cfgmagazines_titan_at_dns;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
					class CAS
					{
						displayName = $STR_A3_CAS_PRESET_DISPLAYNAME;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonRack_12Rnd_PG_missiles,
                            PylonRack_12Rnd_PG_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
				};
			};
	};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_556x45_AUG_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
};