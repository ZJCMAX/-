# include <stdio.h>
int main() {
	int a = 3;
	int b = 0,c = 0;
	while (1) {
		printf("please enter the amount to feed\n");
		scanf_s("%d", &b);
		if (b > a) {
			printf("the sanke is dead ,the length before dead is %d\n", a);
			break;}
		if (b <= a) {
			a += b;
			printf("the sanke is %d meter long\n", a);
		}
	}
	return 0;
}