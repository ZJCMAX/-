# include <stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	int c = 7;
	int d = 8;
	float e = 0, f = 0, g = 0, h = 0,m = 0 ;
	float i = 0.00, j = 0.00, k = 0.00, l = 0.00;
	while (m <= 1000) {
		e = 0, f = 0, g = 0, h = 0;
		char ch;
		printf("please enter the income type wheat W onion O tomato T carrot C\n");
		scanf_s(" %c", &ch, 1);
		if (ch == 'W') {
			printf("please enter the income of wheat\n");
			scanf_s("%f", &i);
			printf("your income is %.2f\n", i * a);
			e = i * a;
		}
		if (ch == 'O') {
			printf("please enter the income of onion\n");
			scanf_s("%f", &j);
			printf("your income is %.2f\n", j * b);
			f = j * b;
		}
		if (ch == 'T') {
			printf("please enter the income of tomato\n");
			scanf_s("%f", &k);
			printf("your income is %.2f\n", k * c);
			g = k * c;
		}
		if (ch == 'C') {
			printf("please enter the income of carrot\n");
			scanf_s("%f", &l);
			printf("your income is %.2f\n", l * d);
			h = l * d;
		}
		m += e + f + g + h;
	}
	printf("income of all %f you can rest now\n",m += e+f+g+h);
	return 0;
}
