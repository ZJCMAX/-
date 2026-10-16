# include <stdio.h>
int main()
{
	int x = 0, a;
	while (x < 200) 
	{
		printf("请输入收入a=");
		scanf_s("%d", &a);
		x += a;
		printf("%d", x);
	}
	printf("恭喜!您已获得%d个金币,现在可以休息了\n", x);
	return 0;
} 
