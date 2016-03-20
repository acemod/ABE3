#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"abe_scout"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"abe_main"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
