# include <stdio.h>
void go(int *d) {
	printf("enter the weight you want to cell\n");
		scanf_s("%d",d);
}
int main() {
	int a[4] = { 5,10,7,8 };
	int b[4] = { 0,0,0,0 };
	char ch;
	int c = 0;
	while (c < 1000) {
		c = 0;
		printf("enter the type XIAOMAI(W)YANGCONG(O)XIHONGSHI(T)HULUOBO(C)\n");
		scanf_s(" %c",&ch,1);
		if (ch == 'W') {
			go(&b[0]);
		}
		else if (ch == 'O') {
			 go(&b[1]);
		}
		else if (ch == 'T') {
			 go(&b[2]);
		}
		else if (ch == 'C') {
			 go(&b[3]);
		}
		else {
			printf("wrong input please enter again\n");
		}
		for (int i = 0;i < 4;i++) {
			c+= a[i] * b[i];
		}
	}
	printf("total price is %d youcan relax",c);
	return 0;
}
