RequestInfoList = {
	REQ_PUBLIC_INFO={
		lengthMap = {
													-- WaitCardUnite	: maxsize = 4	=	4 * 1 * 1,
			[1] = { maxlen = 1, maxwidth = 1, refered = 'UNITE_TYPE', complexType = 'link_refer' },
			-- [2] = nWaitChair( int )	: maxsize = 4,
													-- wfk	: maxsize = 32	=	1 * 32 * 1,
			[3] = 32,
													-- wfk2	: maxsize = 32	=	1 * 32 * 1,
			[4] = 32,
													-- wfk3	: maxsize = 32	=	1 * 32 * 1,
			[5] = 32,
			maxlen = 5
		},
		nameMap = {
			'WaitCardUnite',		-- [1] ( refer )
			'nWaitChair',		-- [2] ( int )
			'wfk',		-- [3] ( char )
			'wfk2',		-- [4] ( char )
			'wfk3',		-- [5] ( char )
		},
		formatKey = '<i2A3',
		deformatKey = '<i2A32A32A32',
		maxsize = 104
	},
	
	UNITE_TYPE={
		lengthMap = {
			-- [1] = nCardIDs( int )	: maxsize = 4,
			maxlen = 1
		},
		nameMap = {
			'nCardIDs',		-- [1] ( int )
		},
		formatKey = '<i',
		deformatKey = '<i',
		maxsize = 4
	}
}