#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
//Arma 3 Australis Too Many F90s Edition
//All  of these need custom UI pictures eventually
class CfgWeapons 
{
	class arifle_AUG_base_F;
	class arifle_AUG_C_base_F;
	class arifle_AUG_GL_base_F;
	class arifle_AUG_black_base_F;
	class arifle_AUG_C_black_base_F;
	class arifle_AUG_GL_black_base_F;
	class arifle_AUG_green_F: arifle_AUG_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR 90 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa"};
		baseWeapon = arifle_AUG_green_F;
	};
	class arifle_AUG_C_green_F: arifle_AUG_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR 90C 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa"};
		baseWeapon = arifle_AUG_green_C_F;
	};
	class arifle_AUG_GL_green_F: arifle_AUG_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR 90 GL 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa","\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\GL40_green_CO.paa"};
		baseWeapon = arifle_AUG_green_GL_F;
	};
};