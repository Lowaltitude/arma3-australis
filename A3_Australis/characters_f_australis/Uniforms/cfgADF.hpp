//Arma 3 Australis Characters_F_Australis/Uniforms cfgADF

/*ADF Naval*/
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
class Australis_U_B_A_CombatUniform_shortsleeve_aucamo_navy: Uniform_Base
{
	author = "Lowaltitude,abb0t,Foxtonnes";
	scope = public;
	displayName = Combat Uniform [ADF] (Naval, Rolled-Up);
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\B_A_Soldier_01_navy_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Australis_B_A_CombatFatigues_01_RolledUp_aucamo_navy_F;
		containerClass = Supply40;
		mass = 40;
	};
};
/*ADF Woodland*/
/*ADF Arid*/
/*ADF Tropic*/

/*Shadow Company Test*/
class U_B_Shadow_tgr_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Shadow)";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_ShadowCombatFatigues_01_tgr_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_Shadow_tshirt_tgr_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Shadow, T-shirt)";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tshirt_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_ShadowCombatFatigues_01_Tshirt_tgr_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_Shadow_vest_tgr_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = "Combat Fatigues (Shadow, Rolled-Up)";
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_vest_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Australis\Characters_F_Australis\Uniforms\Data\clothing1_shadow_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_ShadowReconFatigues_01_tgr_F;
		containerClass = Supply40;
		mass = 40;
	};
};