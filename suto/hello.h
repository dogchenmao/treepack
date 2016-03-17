
typedef struct _tagUNITE_TYPE
{
   int    nCardIDs;
}UNITE_TYPE,*LPUNITE_TYPE;

typedef struct _tagGAME_PUBLIC_INFO
{
    UNITE_TYPE  WaitCardUnite[1][1];
	int         nWaitChair;
	char wfk[32];
	char wfk2[32];
	char wfk3[32];
}GAME_PUBLIC_INFO,*LPGAME_PUBLIC_INFO;
