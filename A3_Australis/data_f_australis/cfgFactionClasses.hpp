//A3_Australis Data_F_Australis Editor Categories Configuration

class CfgFactionClasses
{
	/*class B_AU_F 
	{
		displayName = "NATO (Oceanic)";
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon
	};*/
	
	class Australis_BLU_AU_F
	{
		displayName = "ADF (Australis)";
		priority = 3;
		side = TWest;
		icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_AU_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_au_CA.paa";
	};
	class Australis_BLU_NZ_F
	{
		displayName = "NZDF";
        priority = 3;
        side = TWest;
        icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_NZ_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_nz_CA.paa";
	};
	class Australis_BLU_Pacific_F
	{
		displayName = "Pacific Union Peacekeepers";
        priority = 3;
        side = TWest;
        icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_PU_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_pu_ca.paa";
	};
	//class Australis_BLU_Gendarme
	/*
	class Australis_BLU_Serco_F
	{
		displayName = "Defence Services";
        priority = 3;
        side = TWest;
        icon = "";	//Flag and logo pending
	};
	class Australis_OPF_ID_F
	{
		displayName = "Indonesia";
        priority = 3;
        side = TEast;
        icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_ID_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_id_ca.paa";
	};
	class O_TPR_F
	{
		displayName = "Pirates (Tanoan)";
        priority = 3;
        side = 0;
        icon = ""; // Use Horizon Islands Flag
	};
	class I_AFP_F
	{
		displayName = "Federal Police";
        priority = 3;
        side = 2;
        icon = "A3\data_f_australis\flags\flag_au_ca.paa";		
	};
	class I_MRC_F
	{
		displayName = "Mercernaries";
        priority = 3;
        side = 2;
        icon = ""; //Flag yet to be made
	};
	class I_TPR_F
	{
		displayName = "Pirates (Tanoan)";
        priority = 3;
        side = 2;
        icon = ""; //Use Horizon Islands flag
	};
	class I_Eco_F
	{
		displayName = "Ecowarriors";
        priority = 3;
        side = 2;
        icon = "A3\data_f_australis\flags\flag_eco_ca.paa"; //flag yet to be made		
	};*/
};
class CfgEditorSubcategories
{
	class EdSubCat_Personnel_Navy
	{
		displayName = "Men (Navy)";
	};
	class EdSubCat_Personnel_NewCaledonia
	{
		displayName = "Men (New Caledonia)"; //$STR_A3_Australis_Peacekeepers_NC
	};
	class EdSubCat_Personnel_Fiji
	{
		displayName = "Men (Fiji)"; //$STR_A3_Australis_Peacekeepers_FJ
	};
	class EdSubCat_Personnel_Timor
	{
		displayName = "Men (Timor-Leste)"; //$STR_A3_Australis_Peacekeepers_TL
	};
};	