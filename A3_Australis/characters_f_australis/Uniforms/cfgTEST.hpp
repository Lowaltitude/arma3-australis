class Australis_Test_Uniform_LDF_01: Uniform_Base
{
	author = "Lowaltitude";
	scope = public;
	displayName = "Combat Fatigues [FJ] (MCMC5)";
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_CombatUniform_wdl_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_E_Soldier_01_fjcamo_wdl_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_Test_Uniform_LDF_01_holder;
		containerClass = Supply40;
		mass = 40;
	};
};
class Australis_Test_Uniform_sweater_AAF_01: Uniform_Base
{
	author = "Lowaltitude";
	scope = public;
	displayName = "Combat Fatigues [AAF] (Sweater)";
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_CombatUniform_wdl_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\I_A_Soldier_01_sweater_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_Test_Uniform_sweater_AAF_01_holder;
		containerClass = Supply40;
		mass = 40;
	};
};