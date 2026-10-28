# include <stdio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("ENTER B TO START, ENTER Q TO END");
		scanf_s(" %c", &ch, 1);
		if (ch == 'Q') {
			break;
		}
		if (ch == 'B') 
		{
			int a = 20;
			int b = 2;
			int c = 5;
			int d, e, f = 0;
			printf("ENTER THE NUMBER OF PIZZAS");
			scanf_s("%d", &d);
			printf("ENTER THE NUMBER OF PIZZA TOPPINGS");
			scanf_s("%d", &e);
			f += a * d + b * e;
			printf("do you need food delivery service?(Y/N)");
			scanf_s(" %c", &ch, 1);
			if (ch == 'Y')
			{
				printf("price: %d", f + c);
			}
			else {
				printf("price: %d", f);
			}

		}
	}
	return 0;
}
