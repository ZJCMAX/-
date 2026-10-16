# include <stdio.h>
int main()
{
	float a;
	printf("enter the temprature");
		scanf_s("%f",&a);
		printf("C temperature is %f", (a - 32) * 5 / 9);
		return 0;
}
