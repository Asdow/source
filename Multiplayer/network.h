#pragma once

#include "random.h"

//this one just for structs, variables and functions used between the client and server scripts...

extern  char CLIENT_NAME[30];
extern char SERVER_NAME[30];
extern bool Sawarded;

//extern char *fileToSend;
extern unsigned int setID;
//extern char *fileToSendCopy;




typedef struct
{
	UINT8 client_num;
	char client_name[30];
	int team;
	int cl_edge;
	char client_version[30];
}client_info;

typedef struct
{
	int	max_clients;
	int	same_merc;
	float damage_multiplier;
	INT16 gsMercArriveSectorX;
	INT16 gsMercArriveSectorY;
	int ENEMY_ENABLED;
	int	CREATURE_ENABLED;
	int	MILITIA_ENABLED;
	int	CIV_ENABLED;
	int gsPLAYER_BSIDE;
	INT32 secs_per_tick;
	INT32 starting_balance;
	bool soDis_Bobby;
	bool soDis_Equip;
	BOOLEAN sofGunNut;	
	UINT8	soubGameStyle;
	UINT8	soubDifficultyLevel;
	BOOLEAN	sofTurnTimeLimit;
	BOOLEAN	sofIronManMode;
	UINT8	soubBobbyRay;
	BOOLEAN sofNewInv;
	INT32 gsMAX_MERCS;
	UINT8 client_num;
	char client_name[30];
	char client_names[4][30];
	// OJW - added 20081204
	int	 client_edges[5];
	int  client_teams[4];
	char server_name[30];
	//int cl_ops[4];
	int team;
	int TESTING;
	char kitbag[100];
	bool emorale;
	int gsREPORT_NAME;
	int cl_edge;
	float TIME;
	int WEAPON_READIED_BONUS;
	int ALLOW_CUSTOM_NIV;
	int DISABLE_SPEC_MODE;
	// OJW - added 20081220
	int RANDOM_SPAWN;
	int RANDOM_MERCS;
	int random_mercs[7];
	char server_version[30];
	// OJW - added 20091024
	UINT32 random_table[MAX_PREGENERATED_NUMS];
} settings_struct;

// WANNE: FILE TRANSFER
typedef struct
{
	STRING512 fileTransferDirectory;
	//char fileTransferDirectory[600];	// The file transfer directory path from the server
	int syncClientsDirectory;			// Does the server want to sync files to the clients
	char serverName[30];				// The name of the server. This is used on the client side as a folder inside the client transfer directory
	long totalTransferBytes;
} filetransfersettings_struct;

// added 080101 by OJW
typedef struct
{
	INT16 gsMercArriveSectorX;
	INT16 gsMercArriveSectorY;
	float TIME;
} mapchange_struct;

typedef struct
{
	UINT8 client_num;
	UINT8 newedge;
} edgechange_struct;

typedef struct
{
	UINT8 client_num;
	UINT8 newteam;
} teamchange_struct;

typedef struct
{
	UINT8 client_num;
	UINT8 progress;
	UINT8 downloading;
} progress_struct;

//typedef struct
//{
//	int clnum;
//	UINT8 ubid;
//}ovh_struct;
//
//typedef struct
//{
//	UINT8 ubid;
//}adv;


typedef struct
{
	BOOLEAN fMarkInterruptOccurred;
	INT8 bteam;
	UINT8 ubid;

}endINT;

typedef struct
{
	INT8 bteam;
}real_struct;

typedef struct
{
	UINT8 ubStartingTeam;
}sc_struct;

