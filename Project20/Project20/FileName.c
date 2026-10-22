# include <stdio.h>
struct people{
	char name[20];
	int number;
	char gender;
	int age ;
	int tall ;
};
int main() {
	struct people p1 = { "ZSM",16,'M',20,170};
	struct people* c = &p1;
	char username[20], passord[20];
	char a[20] = "ZPJ", b[20] = "007",d[20] ="0";
	int i = 0, h = 0;
	for (i = 0;i <= 6; i++) {
		printf("ENTER THE USERNAME AND PASSWORD: ");
		scanf_s("%s %s", username, 20, passord, 20);
		while (1) {
			if (strcmp(username, a) == 0 && strcmp(passord, b) == 0) {
				printf("1 name %s\n 2 number %d\n 3gender %c\n 4age %d\n 5tall %d\n 6 OUT", c->name, c->number, c->gender, c->age, c->tall);
				scanf_s("%d", &h);
				switch (h) {
				case 1:
					printf(" enter new name");
					scanf_s("%s", &(c->name), 20);
					printf(" new name %s\n new number %d\n new gender %c\n new age %d\n new tall %d\n", c->name, c->number, c->gender, c->age, c->tall);
					break;
				case 2:
					printf(" enter new number");
					scanf_s("%d", &(c->number), 20);
					printf(" new name %s\n new number %d\n new gender %c\n new age %d\n new tall %d\n", c->name, c->number, c->gender, c->age, c->tall);
					break;
				case 3:
					printf(" enter new gender");
					scanf_s("%c", &(c->gender), 1);
					printf(" new name %s\n new number %d\n new gender %c\n new age %d\n new tall %d\n", c->name, c->number, c->gender, c->age, c->tall);
					break;
				case 4:
					printf(" enter new age");
					scanf_s("%d", &(c->age));
					printf(" new name %s\n new number %d\n new gender %c\n new age %d\n new tall %d\n", c->name, c->number, c->gender, c->age, c->tall);
					break;
				case 5:
					printf(" enter new tall");
					scanf_s("%d", &(c->tall));
					printf(" new name %s\n new number %d\n new gender %c\n new age %d\n new tall %d\n", c->name, c->number, c->gender, c->age, c->tall);
					break;
				case 6:
					printf(" enter finish to out this system");
					scanf_s("%c", &d);
					return 0;
				}
			}
			else {
				printf("you have %d chance to enter the correct username and password ", 6 - i);
				if (i == 6) {
					printf("Hmph,you scumbag");
					return 0;
				}
			}
		}
	}
	return 0;
}