#define CMDLENGTH 45
#define DELIMITER " "
#define CLICKABLE_BLOCKS

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
const Block blocks[] = {
          /*Command*/	/*Update Interval*/	/*Update Signal*/
	/* BLOCK("sb-tasks"             , 10    , 26) , */
	/* BLOCK("sb-music"             , 0     , 11) , */
	BLOCK("sb-pacpackages"       , 0     , 8)  ,
	BLOCK("sb-mailbox"           , 180   , 12) ,
	BLOCK("sb-news"              , 0     , 6)  ,
	/* BLOCK("sb-crypto"            , 0     , 13) , */
	BLOCK("sb-price btc Bitcoin" , 9000  , 21) ,
	/* BLOCK("sb-torrent"           , 20    , 7)  , */
	/* BLOCK("sb-memory"            , 10    , 14) , */
	/* BLOCK("sb-moonphase"         , 18000 , 17) , */
	BLOCK("sb-nextcloud"         , 0     , 9)  ,
	BLOCK("sb-forecast"          , 18000 , 5)  ,
	BLOCK("sb-volume"            , 0     , 10) ,
	BLOCK("sb-cpu"               , 1     , 18) ,
	/* BLOCK("sb-nettraf"           , 1     , 16) , */
	/* BLOCK("sb-battery"           , 5     , 3)  , */
	BLOCK("sb-internet"          , 5     , 4)  ,
	BLOCK("sb-clock"             , 1     , 1)  ,
	BLOCK("sb-kbselect"          , 0     , 30) ,
	/* BLOCK("sb-help-icon"         , 0     , 15) , */
	BLOCK("sb-power-status"      , 0     , 15) ,
};
