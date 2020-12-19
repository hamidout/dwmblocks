//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"⌨", "kbselect", 0, 30},
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"music",	0,	11},
	{"",	"corona",	200,	20},
	{"",	"pacpackages",	0,	8},
	{"",	"news",		0,	6},
	/* {"",	"torrent",	20,	7}, */
	/* {"",	"memory",	10,	14}, */
	{"",	"cpu",		10,	18},
	/* {"",	"forecast",	18000,	5}, */
	{"",	"mailbox",	180,	12},
	{"",	"nettraf",	1,	16},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"clock",	60,	1},
	{"",	"internet",	5,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "||";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
