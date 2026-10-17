# include <stdio.h>
int main()
{
	int a = 0,b = 0,c = 0, d = 0;
	printf("enter the number");
	scanf_s("%d", &a);
	printf("enter the number you want to serch");
	scanf_s("%d",&b);
	if (a == 0) {
		c = 1;
		printf("there is %d number", c);
	}
	while (a > 0) {
		 int d = a % 10;
		if (d == b) {
			c++;
		}
		a = a / 10;
	}
	printf("the number appears %d time", c);
	return 0;
}