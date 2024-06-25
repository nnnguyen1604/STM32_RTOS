typedef struct Linker{
	struct Linker *pre;
	char Title[20];
	char List1[20];
	struct Linker *Menulist1;
	char List1[20];
	struct Linker *Menulist2;
	char List1[20];
	struct Linker *Menulist3;
} Menu;
Menu MainMenu;
