/* user and group to drop privileges to */
static const char *user  = "mitchell";
static const char *group = "mitchell";

static const char *colorname[NUMCOLS] = {
	[INIT] 		=   "#1d2021",   /* after initialization */
	[INPUT] 	=  	"#076678",   /* during input */
	[FAILED] 	= 	"#9d0006",   /* wrong password */
	[CAPS] 		= 	"#b57614",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "It's locked, dumbass!";

/* text color */
static const char * text_color = "#fbf1c7";

/* text size (must be a valid size) */
static const char * font_name = "9x15";
