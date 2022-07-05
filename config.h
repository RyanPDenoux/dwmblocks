//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		     /*Update Interval*/ /*Update Signal*/
	/* {"" , "cat /tmp/recordingicon 2>/dev/null"         , 0     , 9}  , */
	/* {"" , "sb-tasks"                                   , 10    , 26} , */
	/* {"" , "sb-music"                                   , 0     , 11} , */
	{"" , "sb-pacpackages"                             , 60    , 8}  ,
	{"" , "sb-mailbox"                                 , 180   , 12} ,
	{"" , "sb-news"                                    , 0     , 6}  ,
	/* {"" , "sb-crypto"                                  , 0     , 13} , */
	/* {"" , "sb-price lbc \"LBRY Token\" 📚"             , 9000  , 22} , */
	/* {"" , "sb-price bat \"Basic Attention Token\"  🦁" , 9000  , 20} , */
	/* {"" , "sb-price link \"Chainlink\" 🔗"             , 300   , 25} , */
	/* {"" , "sb-price xmr \"Monero\" 🔒"                 , 9000  , 24} , */
	{"" , "sb-price btc Bitcoin 💰"                    , 9000  , 21} ,
	/* {"" , "sb-price eth Ethereum 🍸"                   , 9000  , 23} , */
	/* {"" , "sb-price doge Doge 🐶"                      , 9000  , 23} , */
	/* {"" , "sb-torrent"                                 , 20    , 7}  , */
	/* {"" , "sb-memory"                                  , 10    , 14} , */
	/* {"" , "sb-moonphase"                               , 18000 , 17} , */
	{"" , "sb-nextcloud"                               , 0     , 9}  ,
	{"" , "sb-forecast"                                , 60    , 5}  ,
	{"" , "sb-volume"                                  , 1     , 10} ,
	{"" , "sb-cpu"                                     , 1     , 18} ,
	/* {"" , "sb-nettraf"                                 , 1     , 16} , */
	/* {"" , "sb-battery"                                 , 5     , 3}  , */
	{"" , "sb-internet"                                , 30    , 4}  ,
	{"" , "sb-clock"                                   , 1     , 1}  ,
	{"" , "sb-kbselect"                                , 0     , 30} ,
	/* {"" , "sb-help-icon"                               , 0     , 15} , */
	{"" , "sb-power-status"                            , 0     , 15} ,
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
