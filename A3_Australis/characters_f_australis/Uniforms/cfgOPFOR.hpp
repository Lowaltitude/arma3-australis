// Arma 3 Australis Characters_F_Australis Uniforms CfgOPFOR.hpp
class U_O_officer_noInsignia_idcamo_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = Light Combat Fatigues (Tiger Hex);
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_oicamo_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_idcamo_F;
		containerClass = Supply40;
		mass = 60;
	};
};