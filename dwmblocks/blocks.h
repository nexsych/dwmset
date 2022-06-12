static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"", "sbNettraf",					1,		16},
	{"", "sbNet",						5,		4},
	{"", "sbVol",						0,		10},
	{"", "date +'['%a,' '%d' '%b' '%H:%M'] '",		5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
