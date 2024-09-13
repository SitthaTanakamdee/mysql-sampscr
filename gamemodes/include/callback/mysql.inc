#include <a_samp>
#include <a_mysql>
#include <YSI_Coding\y_hooks>
#include <YSI_Coding\y_timers>  
#include <YSI_Data\y_iterate>

new MySQL: Database;

//--> เชื่อม XAMMPP ใน phpmyAdmin
#define  MYSQL_HOSTNAME     "localhost"
#define  MYSQL_USERNAME     "root"
#define  MYSQL_PASSWORD     ""
#define  MYSQL_DATABASE     "test"

public OnGameModeInit()
{
    new MySQLOpt: option_id = mysql_init_options();
    mysql_set_option(option_id, AUTO_RECONNECT, true); 
    Database = mysql_connect(MYSQL_HOSTNAME, MYSQL_USERNAME, MYSQL_PASSWORD, MYSQL_DATABASE, option_id);
    if (Database == MYSQL_INVALID_HANDLE || mysql_errno(Database) != 0){
        print("MYSQL ERROR : SERVER OFF");
        SendRconCommand("exit"); 
        return 1;
    }
    mysql_set_charset("tis620");
    print("MySQL connection is successful.");
	// Don't use these lines if it's a filterscript
	SetGameModeText("Blank Script");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	return 1;
}