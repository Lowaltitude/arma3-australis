class CfgVehicles 
{
	class Plane_Base_F;
	class Plane_Fighter_05_Base_F: Plane_Base_F 
	{
		class TextureSources
		{
			class Australis_ADF_Geo_Green
			{
				displayName = "RAN Fleet Air Arm Geometric";
				author = $STR_A3_A_Foxtonnes;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_ran_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
			class ADFGrey
			{
				displayName = "ADF (Grey)";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_adf_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
			class NZDF
			{
				displayName = "NZDF";
				author = $STR_A3_A_Lowaltitude;
				textures[] =
				{
					"\A3_Australis\Air_F_Australis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_kahu_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] ={};
			};
		};
	};
	
	class B_Plane_Fighter_05_F: Plane_Fighter_05_Base_F{};
	class B_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F{};
};