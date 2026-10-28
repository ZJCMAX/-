# include <stdio.h>
int main()
{
	int x;
	float  b = 95.125;
	printf("您要买几台电脑?\nx=");
	scanf_s("%d", &x);
	printf("您要买的%d台电脑要%.3f",x , x * b);
	return 0;
}
