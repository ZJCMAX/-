# include <stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	int d = 0, e = 0, f = 0;
	int g = 0, h = 0, i = 0;
	printf("enter the number\n");
	scanf_s("%d %d %d", &a,&b,&c);
	scanf_s("%d %d %d", &d,&e,&f);
	scanf_s("%d %d %d", &g,&h,&i);
	if (a != b != c, d != e != f, g != h != i, a != d != g, b != e != h, c != f != i) {
		printf(" corect you can live here ");
	}
	else { printf("worng you can not live"); }
	return 0;
}