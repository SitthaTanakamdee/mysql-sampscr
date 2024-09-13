#include <YSI_Coding\y_timers>     
#include <YSI_Data\y_iterate>

public OnPlayerConnect(playerid)
{
   SendClientMessage(playerid, 0x087BFFFF, "ทำงานปกติ");
   new query[100];
   mysql_format(gsql, query, sizeof(query), "SELECT Password, ID FROM players WHERE Username = '%e' LIMIT 0, 1" ReturnPlayerName(playerid));
   mysql_tquery(gsql, query, "CheckConnected", "i", playerid);
}
