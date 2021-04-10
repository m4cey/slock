/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2d2d2d",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=20;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;

/* default message */
//static const char * message = "Suckless: Software that sucks less.";
static const char * message = NULL;
static const char * loginmessage = "locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-xos4-terminus-medium-r-normal--18-180-72-72-c-100-paratype-pt154";

static char * censored = "*";
static const int max_censored = 100;
