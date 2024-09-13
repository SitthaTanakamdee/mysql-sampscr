#include <YSI_Coding\y_hooks>
#include <YSI_Coding\y_timers>     
#include <YSI_Data\y_iterate>

enum PlayerData 
{
    ID,
    Password[129],
    Username[64],
    pModel
};

new playerData[MAX_PLAYERS][PlayerData];
