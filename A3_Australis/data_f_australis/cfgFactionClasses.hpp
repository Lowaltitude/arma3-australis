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
	
	/* BLUFOR */
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
	class Australis_BLU_FR_F 
	{
		displayName = "France (Pacific)";
        priority = 3;
        side = TWest;
        //icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_NZ_CA.paa"; // Based off the FANC insignia
		//flag = "\A3_Australis\Data_F_Australis\Flags\flag_nz_CA.paa"; // Atlas/Aegis French Flag
	};
	class Australis_BLU_Pacific_F
	{
		displayName = "Pacific Union";
        priority = 3;
        side = TWest;
        icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_PU_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_pu_ca.paa";
	};
	class Australis_BLU_Dynamo_F
	{
		displayName = "Dynamo Security";
        priority = 3;
        side = TWest;
        //icon = "";	//Flag and logo pending
		//flag = "\A3_Australis\Data_F_Australis\Flags\flag_pu_ca.paa";
	};
	
	/* OPFOR */
	class Australis_OPF_ID_F
	{
		displayName = "Indonesia";
        priority = 3;
        side = TEast;
        //icon = "\A3_Australis\Data_F_Australis\FactionIcons\CfgFactionClasses_BLU_ID_CA.paa";
		flag = "\A3_Australis\Data_F_Australis\Flags\flag_id_ca.paa";
	};
	class Australis_OPF_C_F
	{
		displayName = "Syndikat";
        priority = 3;
        side = TEast;
		icon = "\a3\Data_F_Exp\FactionIcons\icon_SYND_CA.paa";
		flag = "\a3\Data_F_Exp\Flags\flag_SYND_CO.paa";
	};
	
	/* INDFOR */
	class Australis_IND_MRC_F
	{
		displayName = "Mercernaries";
        priority = 3;
        side = TGuerrila;
        //icon = ""; //Flag yet to be made
	};
	class Australis_IND_KA_F
	{	
		displayName = "Karpanga";
        priority = 3;
        side = TGuerrila;
        //icon = ""; //Flag yet to be made
	};
	
	/* CIVIL */
	class Australis_CIV_IntRescue_F
	{
		displayName = "IDRO";
		priority = 2;
		side = TCivilian;
		//icon =;
		//flag = ;
	};
	class Australis_CIV_GSO_F
	{
		displayName = "GSO";
		priority = 2;
		side = TCivilian;
		//icon =;
		//flag = ;
	};
	
	
	/*
	
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
	class I_TPR_F
	{
		displayName = "Pirates (Tanoan)";
        priority = 3;
        side = 2;
        icon = ""; //Use Horizon Islands flag
	};
	class Australis_OPF_Eco_F
	{
		displayName = "Ecowarriors";
        priority = 3;
        side = 2;
        icon = "A3\data_f_australis\flags\flag_eco_ca.paa"; //flag yet to be made		
	};
	
	*/
};
class CfgEditorSubcategories
{
	class EdSubCat_Personnel_Navy
	{
		displayName = "Men (Navy)"; //$STR_A3_Australis_Men_Nvy
	};
	class EdSubCat_Personnel_Field
	{
		displayName = "Men (Field Force)"; //$STR_A3_Australis_Men_Field
	};
	class EdSubCat_Personnel_Commandos
	{
		displayName = "Men (Commandos)"; //$STR_A3_Australis_Men_Commandos
	};
	class EdSubCat_Personnel_NORFORCE
	{
		displayName = "Men (NORFORCE)"; //$STR_A3_Australis_Men_NORFORCE
	};
	class EdSubCat_Personnel_PapuaNewGuinea
	{
		displayName = "Men (Papua New Guinea)"; //$STR_A3_Australis_Peacekeepers_PNG
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