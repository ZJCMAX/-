#include  <stdio.h>
int main()
{
	char ch;
	printf("你是要做加法A还是乘法M还是减法S除法D？\n");
	scanf_s("%c", &ch);
	if (ch == 'A')
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		printf("%d", a + b);
		return 0;
	}
	if (ch == 'M')
	{
		int c, d;
		scanf_s("%d %d", &c, &d);
		printf("%d", c * d);
		return 0;
	}
	if (ch == 'S')
	{
		int e, f;
		scanf_s("%d %d", &e, &f);
		printf("%d", e - f);
		return 0;
	}
	if (ch == 'D')
	{
		int g, h;
		scanf_s("%d %d", &g, &h);
		printf("%d", g / h);
		return 0;
	}return 0;
}
