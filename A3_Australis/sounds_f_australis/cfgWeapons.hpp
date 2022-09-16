//Arma 3 Australis Sounds_F_Australis Weapon Sounds Configuration

/*Base Classes*/
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons 
{
	class Rifle_Long_Base_F;
	class LMG_Zafir_F;
	/*Arma 3 Australis*/
	/*MG 121 7.62 mm*/
	class Australis_GPMG_01_base_F: Rifle_Long_Base_F
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MMG01_Shot_SoundSet",
					"MMG01_Tail_SoundSet",
					"MMG01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"MMG01_silencerTail_SoundSet",
					"MMG01_silencerInteriorTail_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MMG01_Shot_SoundSet",
					"MMG01_Tail_SoundSet",
					"MMG01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"MMG01_silencerShot_SoundSet",
					"MMG01_silencerTail_SoundSet",
					"MMG01_silencerInteriorTail_SoundSet"
				};
			};
		};
	};
	class LMG_Aravah_F: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_Shot_SoundSet",
					"Zafir_Tail_SoundSet",
					"Zafir_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Zafir_silencerShot_SoundSet,
					Zafir_silencerTail_SoundSet,
					Zafir_silencerInteriorTail_SoundSet
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Zafir_Shot_SoundSet",
					"Zafir_Tail_SoundSet",
					"Zafir_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Zafir_silencerShot_SoundSet,
					Zafir_silencerTail_SoundSet,
					Zafir_silencerInteriorTail_SoundSet
				};
			};
		};
	};
};