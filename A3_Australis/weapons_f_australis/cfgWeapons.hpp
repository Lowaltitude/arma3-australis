class CfgWeapons //Moved from config.cpp
{
	#include "cfgPistols.hpp"
	#include "cfgRifles.hpp"
	#include "cfgMachineguns.hpp"
	#include "cfgThrow.hpp"
	#include "presets.hpp"
	
	//BIM 9X Helicopter Test
	class MissileLauncher;
	class weapon_BIM9xLauncher: MissileLauncher
	{
		magazines[] += {"PylonRack_Missile_BIM9X_helo_x1"};
	};
};