//Arma 3 Australis Characters_F_Australis cfgVehicles.hpp

class CfgVehicles
{
    /* Definitons */
    #include "\A3_Aegis\macros_characters.hpp"
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Bases */
    class Civilian_F;
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;


	
    /* Factions */
	class O_A_officer_F;
    class I_soldier_F;
    class I_soldier_lite_F;
    class I_pilot_F;
	class I_E_Uniform_01_F;
	class B_Soldier_F;
	class B_soldier_AR_F;
	class B_Soldier_SL_F;
    class B_pilot_F;
    class B_Diver_F;
    class B_CBRN_Man_Oversuit_01_MTP_F;
    class B_soldier_PG_F;
    class B_Soldier_base_F: SoldierWB
    {
        class EventHandlers;
    };
    //#include "cfgADF_Atlas.hpp"       // ADF - Atlas Patch
	#include "cfgADF.hpp"

    /* Uniforms */
    #include "cfgUniforms.hpp"

    /* Deprecated */
    //#include "deprecated.hpp"
};