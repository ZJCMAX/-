# include <stdio.h>
int main()
{
	int a ;
		printf("enter the year");
		scanf_s("%d", &a);
		if (a>0){
		printf("the center is %d", a / 100 + 1);
	}
	if (a <= 0) {
		printf("year can not be a zero or negative number");
}
	return 0;
}
