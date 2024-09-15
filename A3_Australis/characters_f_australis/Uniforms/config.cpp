//Arma 3 Australis Characters_F_Australis/Uniforms Configuration
/*Basic Defines and cfgPatches*/
#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
//#include "cfgVehicles.hpp"
class CfgWeapons //Move to cfgVehicles.hpp later
{
	/*Base Classes*/
	class UniformItem;
	class Uniform_Base;
	class U_I_CombatUniform_tshirt;
	
	/*Configs by Faction*/
	#include "cfgADF_Atlas.hpp"	// Arma 3 Atlas Patch
	#include "cfgADF.hpp"
	#include "cfgNZDF.hpp"
	#include "cfgPU.hpp"		// Pacific Union
	//#include "cfgFrance.hpp"	// French (Tropical and Arid Geotiger)
	#include "cfgOPFOR.hpp"
	#include "cfgTEST.hpp"		// Test Uniforms
};