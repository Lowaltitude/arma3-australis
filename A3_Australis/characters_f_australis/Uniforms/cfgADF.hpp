//Arma 3 Australis Characters_F_Australis/Uniforms cfgADF
class Australis_U_B_A_CombatUniform_aucamo_navy: Uniform_Base
{
	author = "Lowaltitude,abb0t,Foxtonnes";
	scope = public;
	displayName = Combat Uniform [ADF] (Naval);
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_navy_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_B_A_CombatFatigues_01_aucamo_navy_F;
		containerClass = Supply40;
		mass = 40;
	};
};