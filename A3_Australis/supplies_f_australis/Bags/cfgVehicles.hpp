class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
	class Bag_Base;

    /* Bases */
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
	class B_TacticalPack_Base;
	class B_FieldPack_Base;
	class B_Carryall_Base;
	class B_Bergen_Base_F;
	class B_ViperHarness_base_F;
	class B_ViperLightHarness_base_F;
	class B_RadioBag_01_base_F;
	class B_Carryall_cbr;
	class B_AssaultPack_cbr;
	class B_AssaultPack_rgr;
	//Arma 3 Aegis
	class Aegis_B_patrolBackpack_blk_F;
	
    /* Arsenal */
	//Atlas
	class Atlas_B_patrolBackpack_aucamo_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = "Patrol Bag [ADF]";
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_O_UAV_01_backpack_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Supplies_F_Australis\Bags\Data\UAV_backpack_patrol_aucamo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Drones_F\Air_F_Gamma\UAV_01\data\uav_01_backpack_fab.rvmat"};
	};
	/* Factions */
	/*#include "cfgADF.hpp"	*/	// Australia

};