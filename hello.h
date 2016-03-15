
typedef struct _tagUNITE_TYPE
{
   int    nCardIDs;
}UNITE_TYPE,*LPUNITE_TYPE;

//游戏公共信息,所有玩家都可见的信息
typedef struct _tagGAME_PUBLIC_INFO
{
	//需同SK_PUBLIC_INFO一致 
	//begin
    UNITE_TYPE  WaitCardUnite[1][1];   //首家等待的牌型
	int         nWaitChair;		 //首家出牌
	char wfk[32];
	char wfk2[32];
	char wfk3[32];
}GAME_PUBLIC_INFO,*LPGAME_PUBLIC_INFO;
