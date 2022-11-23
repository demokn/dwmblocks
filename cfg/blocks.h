//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-pacpackages",	3600,	8},
	{"", "sb-forecast",		1800,	5},
	{"", "sb-nettraf",		2,		16},
	{"", "sb-cpuusage",		2,		15},
	{"", "sb-memory",		2,		14},
	{"", "sb-volume",		2,		10},
	{"", "sb-brightness",	2,		18},
	{"", "sb-battery",		2,		3},
	{"", "sb-clock",		5,		1},
	{"", "sb-internet",		5,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
