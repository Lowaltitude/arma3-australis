#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgWeapons 
{
	class arifle_AUG_base_F;
	class arifle_AUG_C_base_F;
	class arifle_AUG_GL_base_F;
	class arifle_AUG_black_base_F;
	class arifle_AUG_C_black_base_F;
	class arifle_AUG_GL_black_base_F;
	class arifle_Vulcan_F: arifle_AUG_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "Vulcan-90 5.45mm";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\AUG_black_CO.paa"};
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		magazineWell[] = {AK_545x39};
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		baseWeapon = arifle_Vulcan_F;
	};
	class arifle_Vulcan_C_F: arifle_AUG_C_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "Vulcan-90C 5.45mm";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\AUG_black_CO.paa"};
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		magazineWell[] = {AK_545x39};
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		baseWeapon = arifle_Vulcan_C_F;
	};
	class arifle_Vulcan_GL_F: arifle_AUG_GL_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "Vulcan-90 GL 5.45mm";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\AUG_black_CO.paa"};
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		magazineWell[] = {AK_545x39};
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		baseWeapon = arifle_Vulcan_GL_F;
	};
	class arifle_AUG_green_F: arifle_AUG_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa"};
		baseWeapon = arifle_AUG_green_F;
	};
	class arifle_AUG_green_C_F: arifle_AUG_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90C 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa"};
		baseWeapon = arifle_AUG_green_C_F;
	};
	class arifle_AUG_green_GL_F: arifle_AUG_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 GL 5.56mm (Green)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_green_CO.paa"};
		baseWeapon = arifle_AUG_green_GL_F;
	};
	class arifle_AUG_gretan_F: arifle_AUG_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 5.56mm (Two-Tone)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_gretan_CO.paa"};
		baseWeapon = arifle_AUG_gretan_F;
	};
	class arifle_AUG_gretan_C_F: arifle_AUG_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90C 5.56mm (Two-Tone)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_gretan_CO.paa"};
		baseWeapon = arifle_AUG_gretan_C_F;
	};
	class arifle_AUG_gretan_GL_F: arifle_AUG_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 GL 5.56mm (Two-Tone)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_gretan_CO.paa"};
		baseWeapon = arifle_AUG_gretan_GL_F;
	};
		class arifle_AUG_tan_F: arifle_AUG_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 5.56mm (Tan)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_tan_CO.paa"};
		baseWeapon = arifle_AUG_tan_F;
	};
	class arifle_AUG_tan_C_F: arifle_AUG_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90C 5.56mm (Tan)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_tan_CO.paa"};
		baseWeapon = arifle_AUG_tan_C_F;
	};
	class arifle_AUG_tan_GL_F: arifle_AUG_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = "AUR-90 GL 5.56mm (Tan)";
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\UI\icon_arifle_AUG_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Australis\Weapons_F_Australis\Rifles\AUG\Data\AUG_tan_CO.paa"};
		baseWeapon = arifle_AUG_tan_GL_F;
	};
};