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
	};
};