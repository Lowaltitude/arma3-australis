//Arma 3 Australis Characters_F_Australis cfgFaces.hpp
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		/*Inheritance Tree*/
		class Default{};
		class PersianHead_A3_01;
		class WhiteHead_01: Default{};
		class WhiteHead_18;
		class WhiteHead_04;
		class Barklem;
		class WhiteHead_18_Price: WhiteHead_18
		{
			author="$STR_A3_Bohemia_Interactive";
			displayname="Price";
			texture="\A3_Australis\Characters_F_Australis\Heads\Data\m_white_18_price_co.paa";
			material="\A3_Australis\Characters_F_Australis\Heads\Data\m_white_18_price.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_white_hairy_2_co.paa";
			materialWounded1="\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			materialWounded2="\A3\Characters_F_EPB\Heads\Data\m_white_18_injury.rvmat";
			disabled = false;
		};
		class BritishHead_02_Garrick: Barklem
		{
			author = "Bohemia Interactive";
			disabled = false;
			displayName = "Garrick";
			head = "BlackHead_A3";
			identityTypes[] = {"Head_NATO","Head_African"};
			material = "\A3\Characters_F_Tacops\Heads\Data\m_Barklem.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_african_01_injury.rvmat";
			texture = "\A3_Australis\Characters_F_Australis\Heads\Data\m_garrick_co.paa";
			textureHL = "\A3_Australis\Characters_F_Australis\Heads\Data\hl_garrick_co.paa";
		};
		class BritishHead_03_Riley: WhiteHead_04
		{
			author="$STR_A3_Bohemia_Interactive";
			displayname="Riley";
			texture="\A3_Australis\Characters_F_Australis\Heads\Data\m_riley_co";
			material="\A3_Australis\Characters_F_Australis\Heads\Data\m_white_riley.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
			materialWounded1="A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			materialWounded2="A3\Characters_F\Heads\Data\m_White_04_injury.rvmat";
			disabled = false;
		};
		/*class Barklem: AfricanHead_01
		{
			identityTypes += 
			{
				"Head_AU",
				"Head_NZ"
			};
		};
		class Pilot1_Head_rf: WhiteHead_24
		{
			identityTypes += 
			{
				"Head_AU"
			};
		};
		class Kerry: Default
		{
			identityTypes += 
			{
				"Head_AU"
			};
		};*/
	};
};