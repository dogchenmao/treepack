
#define     DEF_PULSE_INTERVAL      60          // 客户端发送脉搏的间隔时间

// 与游戏大厅兼容的宏定义
#define     MAX_AREANAME_LEN        32          // 游戏区域名长度

#define		MAX_SERVERIP_LEN		32			// 服务器IP最长长度(含NULL)

#define		MAX_SERVERNAME_LEN		32			// 服务器名称最长长度(含NULL)

#define		MAX_USERNAME_LEN		32			// 用户名最长长度(含NULL)

#define		MAX_NICKNAME_LEN		16			// 用户昵称最长长度(含NULL)

#define		MAX_PASSWORD_LEN		32			// 用户口令最长长度(含NULL)

#define		MAX_ROOMNAME_LEN		32			// 房间名称最长长度(含NULL)

#define		MAX_WWW_LEN				64			// URL最长长度(含NULL)

#define		MAX_HARDID_LEN			32			// 硬件标识ID最大长度

#define		MAX_CHAIR_COUNT			8			// 每张桌子的最多椅子数,每个游戏最多16人

#define		MAX_VISITOR_COUNT		8			// 每张椅子的最多旁观数

#define		MAX_LEVELNAME_LEN		16			// 级别名称长度

#define		MAX_PLAYER_LEVELS		20			// 最多级别个数

#define		MAX_SERIALNO_LEN		32			// 每局序列号最大长度

#define		MAX_GAMENAME_LEN		32			

// 模板程序使用的宏定义

#define		INVALID_OBJECT_ID		-1			// 无效对象ID

#define		INVALID_RELATIONSHIP	-2			// 无效大小关系

#define		MAX_DICE_NUM			4			// 最多骰子个数

#define		MAX_CHATMSG_LEN			64			// 聊天内容长度

#define     MAX_CHATHEAD_LEN        128			// 聊天头部长度

#define		MAX_CHAIRS_PER_TABLE	MAX_CHAIR_COUNT		// 每张桌子的最多椅子数

#define		MAX_VISITORS_PER_CHAIR	MAX_VISITOR_COUNT	// 每张椅子的最多旁观数

#define		MAX_LEVEL_NUM			MAX_PLAYER_LEVELS	// 最多级别个数

#define		MAX_CARDS_PER_CHAIR		64			// 每张椅子的最多牌张数    

#define		MAX_BOTTOM_CARDS		32			// 最多底牌张数

#define		MAX_CARDS_LAYOUT_NUM	64			// 牌的方阵长度

#define		MAX_ABT_TWINS			16			// 同张最大数

#define		MAX_GAME_TIMECOST		(60 * 1000) // 每局游戏的最长耗时(秒)

#define     MAX_GAME_BOUT           10          // 每次游戏最大局数，超过不再计算经验

#define     MAX_USER_BOUT		  INT_MAX		// 用户允许进行的最大游戏局数，超过这个局数无法继续游戏。

#define     MAX_TABLE_BOUT		  INT_MAX		//一桌允许进行的最大游戏局数，超过这个局数无法继续游戏。

#define		DEF_THROW_WAIT			30			// 出牌等待时间(秒)

#define		THROW_WAIT_EXT			2			// 出牌等待时间(秒)延长

#define		DEF_ENTRUST_WAIT		2			// 托管等待时间(秒)

#define		MAX_AUTO_THROW			4			// 自动出牌允许次数

#define		MAX_BREAK_ALLOWED		8			// 最大断线允许次数

#define		MIN_DEPOSIT_NEED		10			// 最少需要10两银子(玩银子的场合)

#define		DEF_BREAK_WAIT			(3 * 60)	// 断线续玩等待时间(秒)

#define		DEF_BREAK_LOCK			30			// 断线逃跑锁定时间(秒)

#define		DEF_BREAK_DOUBLE		2			// 断线扣分倍数

#define		MAX_AUCTION_COUNT		32			// 最多叫庄次数

#define		MAX_AUCTION_GAINS		400			// 最大叫分

#define		MIN_AUCTION_GAINS		0			// 最小叫分

#define		DEF_AUCTION_GAINS		100			// 默认叫分

#define		MIN_CHAT_EXPERIENCE		100			// 游戏聊天所需最小经验值

#define		MB_MIN_CHAT_EXPERIENCE	0			// 移动端游戏聊天所需最小经验值

#define     MAX_URL_LEN             256

#define     MAX_URL_LEN_EX          1024

#define     MAX_WEBSIGN_LEN			256	

#define     MAX_WAIT_START_SECONDS  60          // 等待开始游戏的最长时间

#define     MAX_RESULT_COUNT        30          // 最多纪录30局游戏结果

#define		MAX_LEVELINFO_LEN		360			// 最大等级信息

#define		MAX_SYSMSG_LEN			1024		// 最大系统ID

#define     MAX_ASKEXIT				2			//一局中最多请求退出次数

#define     DEF_ASKEXIT_WAIT        30			//请求强退等待时间

#define     DEF_DELAY_EXCELLENT     100         // 小于100毫秒

#define     DEF_DELAY_GOOD          200         // 小于200毫秒

#define     DEF_DELAY_COMMON        400         // 小于400毫秒

#define		DEF_SOLOALONE_KICKTIME	120			// 秒

#define     DEF_DELAY_REQ			1000        // 延迟默认毫秒

#define     MIN_DELAY_REQ			100			// 延迟最低毫秒

#define     DEF_DELAY_GAMEWIN		200         // 结算延迟默认毫秒

#define     MAX_DELAY_GAMEWIN		3000        // 结算延迟最大毫秒

#define     MAX_GAMECODE_LEN		4			// 游戏缩写长度

#define		MAX_BROADCAST_STR_LEN   32			// 广播信息长度

#define		CH_FLAG_DELAY_TIMEOUT 	0x00000010	// delay timeout, need to handle at once

#define     DEF_USER_SPEAK_SPAN		2			// 发言间隔默认秒数

#define     DEF_DELAYSEC_EXCELLENT      0
#define     DEF_DELAYSEC_GOOD			1
#define     DEF_DELAYSEC_COMMON         2
#define     DEF_DELAYSEC_BAD            3
#define     DEF_DELAYSEC_MAX            4

// 房间设置
#define		RO_TABLE_EQUAL			0x00000002	// 桌子相同
#define		RO_NEED_DEPOSIT			0x00000004	// 需要银子
#define     RO_AUTO_STARTGAME		0x00000200	// 进入游戏后自动开始
#define		RO_FORBID_CHAT			0x00000400	// 禁止游戏里聊天
#define		RO_FORBID_DESERT		0x00004000	// 禁止强退
#define		RO_FORBID_RECHON		0x00020000	// 禁止算牌
#define		RO_FORBID_LOOKCHAT		0x00080000  // 禁止游戏里旁观者发消息
#define     RO_SCORE_FROMDB			0x00100000	// 积分从数据库取

//RoomConfig
#define		RC_DARK_ROOM            0x00000001	// 隐名房间
#define     RC_RANDOM_ROOM          0x00000002  // 随机防作弊房间
#define     RC_CLOAKING 			0x00000008  // 隐身房
#define     RC_SOLO_ROOM			0x00000040	// Solo模式房间
#define		RC_LEAVEALONE           0x00000080  // 独自离桌模式(SOLO)模式下
#define		RC_SUPPORTMOBILE		0x00000800	// 支持移动客户端
#define		RC_VARIABLE_CHAIR		0x00001000	// 开始游戏人数可变
#define     RC_PRIVATEROOM          0x00010000  // 支持 私人包间
#define		RC_ALLBREAKNOCLEAR      0x00200000  // 所有玩家掉线时不清桌
#define     RC_WAITCHECKRESULT      0x00400000  // 游戏结果等待checksvr返回
#define		RC_TAKEDEPOSITINGAME	0x01000000	// 支持游戏里面划银

//RoomManage
#define		RM_MATCHONGAME          0x00000004  // 该房间的游戏结果储存到MatchOnGameXXX表，而非主游戏表，用于排行赛模式
#define		RM_LEAGUEMATCH          0x40000000  // 赛趣超级联赛专属房间

//游戏设置
#define     GO_NOT_VERIFYSTART      0x00010000  // 开始游戏不向RoomSvr校验
#define     GO_USE_REPLAY           0x00020000  // 使用存盘
#define     GO_USE_CARDMASTER       0x00040000  // 使用记牌器
#define     GO_CHECKMINDEPOSIT		0x00000100	// 按开始时校验房间最小银子
#define     GO_CHECKMAXDEPOSIT		0x00000200  // 按开始时校验房间最大银子

// 桌子状态
#define		TS_PLAYING_GAME			0x00000001	// 游戏进行中
#define     TS_WAITING_START        0x00000002	// 等待游戏开始
#define		TS_WAITING_AUCTION		0x00000010	// 等待叫庄
#define		TS_WAITING_CALL			0x00000020	// 等待叫主
#define		TS_WAITING_BOTTOM		0x00000040	// 等待扣底
#define		TS_WAITING_THROW		0x00000100	// 等待出牌
#define		TS_WAITING_BIGGER		0x00000200	// 等待别人压牌
#define		TS_WAITING_CATCH		0x00000400	// 等待抓牌
#define		TS_WAITING_REPLY		0x00001000	// 等待别人回复


#define		TS_WAITING_MOVE			TS_WAITING_THROW	// 等待落子

// 玩家状态
#define		US_USER_ENTERED			0x00000001	// 玩家已进入
#define		US_GAME_STARTED			0x00000002	// 游戏已开始
#define		US_CALL_DONE			0x00000004	// 已叫牌
#define     US_USER_OFFLINE         0x00000008  // 掉线
#define     US_USER_AUTOPLAY        0x00000010  // 客户端托管
#define     US_USER_QUIT            0x00000020  // 离开
#define		US_USER_WAITNEWTABLE	0x00000040  // 等待分桌状态



// 玩家类型
#define		UT_COMMON				0x00000000	//普通用户
#define		UT_MEMBER				0x00000001	//会员用户
#define		UT_MATCH				0x00000002	//比赛用户
#define		UT_ADMIN				0x00001000	//管理用户
#define		UT_SUPER		     	0x00002000	//超级管理员

#define		UT_HANDPHONE   			0x00000800	//手机用户

// 手机用户网络类型
#define		MB_NET_NOT				0			// 非手机用户
#define		MB_NET_2G				1
#define		MB_NET_3G				2
#define		MB_NET_WIFI				3
#define		MB_NET_OTHER			4
#define		MB_NET_MAX				MB_NET_OTHER

// 牌的状态
#define		CS_BLACK				0			// 未摸
#define		CS_CAUGHT				1			// 玩家手中
#define		CS_BOTTOM				2			// 玩家扣底
#define		CS_OUT					-1			// 牌已打出
#define		CS_HIDDEN				-2			// 牌已隐藏
#define		CS_UNKNOWN				-999999		// 未知

// 输赢状况
#define		GW_NORMAL				0x00000001	// 正常赢
#define		GW_STANDOFF				0x00000002	// 和局
#define		GW_GIVEUP				0x00000004	// 投降认输
#define		GW_TIMEOUT				0x00000008	// 超时认输
#define		GW_INVALID				0x00000010	// 本局无效

// 下一局标志
#define		NB_NO_LEAVE				0x00000001	// 下一局必须打
#define		NB_BANKER_RESET			0x00000002	// 下一局重新叫庄

#define		MIN_WIN_POINTS			1			// 至少赢1点
#define		MAX_ASK_REPLYS			3			// 最多请求对方回复次数


// 错误代码
#define		TE_DEPOSIT_NOT_ENOUGH	-10001		// 银子不够
#define		TE_PLAYER_NOT_SEATED	-10010		// 玩家离开
#define		TE_SCORE_NOT_ENOUGH		-10100		// 积分不够
#define		TE_SCORE_TOO_HIGH		-10200		// 积分太高
#define     TE_USER_BOUT_TOO_HIGH   -10300		// 玩家局数太多
#define     TE_TABLE_BOUT_TOO_HIGH  -10400		// 本桌局数太多

// 游戏特征选项
#define		GF_AUCTION_ONCE				0x00100000	// 叫庄仅限一轮
#define		GF_AUCTION_REVERSE			0x00200000	// 叫分从大往小
#define		GF_DEPOSIT_MANUAL			0x00400000	// 手工设置银子
#define		GF_SCORE_FROMDB				0x01000000	// 积分从数据库取
#define		GF_RESULT_TODB				0x02000000	// 记录游戏结果日志
#define		GF_LEVERAGE_ALLOWED			0x04000000	// 允许以小博大

#define		XYG_TEST_FILE				_T("test.ini")

// GameRunLog
#define		GRL_VERSION					2			// 日志版本号


#define BASE_INVENTED_TABLE           20000 //虚拟桌号
#define GAME_AUTO_START_SECONDS       5     //分桌后5秒自动开始
#define GAME_START_COUNTDOWN		  30	//开始游戏默认倒计时
#define ASK_EXIT_FLAG				  0x00000001	//协商退出标记
#define TOO_MANY_IDLEGAME			  100	//可变桌椅打酱油局数过多

#define	ROOM_PLAYER_STATUS_WALKAROUND	11	// 伺机入座（比赛中是进入房间）
#define	ROOM_PLAYER_STATUS_SEATED		12	// 已入座，（比赛中是等待下一局，不拆桌）
#define	ROOM_PLAYER_STATUS_WAITING		13	// 等待开始
#define	ROOM_PLAYER_STATUS_PLAYING		14	// 玩游戏中
#define	ROOM_PLAYER_STATUS_LOOKON		15	// 旁观
#define	ROOM_PLAYER_STATUS_BEGAN		16	// 开始游戏

#define	FEE_MODE_FREE					0	// 免收
#define	FEE_MODE_FIXED					1	// 固定
#define	FEE_MODE_TEA					6	// 茶水
#define	FEE_MODE_SERVICE_FIXED			7	// 服务费模式，抽取每位玩家固定数量服务费，每局付费后，再结算输赢
#define	FEE_MODE_SERVICE_MINDEPOSIT		8	// 服务费模式，按最小银两玩家的万分比收取茶水费
#define	FEE_MODE_SERVICE_SELFDEPOSIT	9	// 服务费模式，按各自银两的万分比收取茶水费
