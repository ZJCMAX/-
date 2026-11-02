# include <stdio.h>
int main()
{
	char ch;
	while (1)
	{
		printf("ENTER B TO START, ENTER Q TO END\n");
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
			printf("ENTER THE NUMBER OF PIZZAS\n");
			scanf_s("%d", &d);
			printf("ENTER THE NUMBER OF PIZZA TOPPINGS\n");
			scanf_s("%d", &e);
			printf("do you need food delivery service?(Y/N)\n");
			scanf_s(" %c", &ch, 1);
			if (ch == 'Y') {
				printf("TOTAL COST OF PIZZA IS %d\n", (a * d) + (b * e) + c);
			}
			else if (ch == 'N') {
				printf("TOTAL COST OF PIZZA IS %d\n", (a * d) + (b * e));
			}
		}
	}
	return 0;
}