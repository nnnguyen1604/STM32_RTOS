
typedef struct Linker{
	struct Linker *pre;
	char Title[20];
	char List1[20];
	struct Linker *Menulist1;
	char List2[20];
	struct Linker *Menulist2;
	char List3[20];
	struct Linker *Menulist3;
} Menu;
Menu MainMenu;

Menu MainMenu = {
	NULL,
	"MAIN MENU",
	"Sensor",NULL
	"Actuator", NULL,
	"MAIN MENU", NULL,
	"MAIN MENU", NULL,
}



