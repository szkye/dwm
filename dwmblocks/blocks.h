//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "/home/szkye/.status/kernel",					3600,		0},
	{" ", "/home/szkye/.status/pacupdate",					30,		0},
	{"", "/home/szkye/.status/bandwidth",					10,		0},
	{" ", "/home/szkye/.status/memory",					10,		0},
	{" ", "/home/szkye/.status/cpu_usage",					10,		0},
	{" ", "/home/szkye/.status/cputemp",					10,		0},
	{" ", "/home/szkye/.status/ssd",					60,		0},
	{" ", "/home/szkye/.status/clock",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
