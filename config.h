/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BG] =   "#2d2d2d",
	[FG] =  "#005577",
	[C1] = "#CC3333",
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[BG] },
		{ "color4",       STRING,  &colorname[FG] },
		{ "color1",       STRING,  &colorname[C1] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;

/* default message */
//static const char * message = "Suckless: Software that sucks less.";
static const char * message = NULL;
static const char * loginmessage = "locked";

static const char * font_name = "";
static char * censored = "*";
static const int max_censored = 20;
