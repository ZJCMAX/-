# include <stdio.h>
void go(int* d) {
	printf("enter the weight you want to cell");
	scanf_s("%d",d);
}
int main(){
	int a[4] = {5,10,7,8};
	int b[4] = { 0,0,0,0 };
	int c = 0;
	char ch;
	while (c < 1000) {
		printf("change price(M) or cell(S)");
		scanf_s(" %c", &ch, 1);
		if (ch == 'M') {
			printf("choice the type[W][O][C][T]");
			scanf_s(" %c", &ch, 1);
			if (ch == 'W') {
				printf("enter teh new price");
				scanf_s("%d", &a[0]);
			}
			if (ch == 'O') {
				printf("enter teh new price");
				scanf_s("%d", &a[1]);
			}
			if (ch == 'C') {
				printf("enter teh new price");
				scanf_s("%d", &a[2]);
			}
			if (ch == 'T') {
				printf("enter teh new price");
				scanf_s("%d", &a[3]);
			}
		}
		if (ch == 'S') {
			printf("choice the type[W][O][C][T]");
			scanf_s(" %c", &ch, 1);
			if (ch == 'W'){
				go(&b[0]);}
			if (ch == 'O') {
				go(&b[1]);
			}
			if (ch == 'C') {
				go(&b[2]);
			}
			if (ch == 'T') {
				go(&b[3]);
			}
		}
		c = 0;
		for (int i = 0;i < 4;i++) {
			c += a[i] * b[i];
		}
	}
	printf("total price is %d you can relax ",c);
return 0;
}