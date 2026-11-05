# include <stdio.h>
# include <time.h>
int main()
{
	char ch;
	printf("enter the [B] to star [S] to stop\n ");
	scanf_s(" %c", &ch,1);
	while (1) {
		if (ch == 'B') {
			clock_t a, b;
			double c;
			printf("please print enter to star\n");
			getchar(); 
			a = clock();
			printf("please print enter to stop\n");
			getchar();
			b = clock();
			printf("the time is %f\n", c = (double)(b - a) / 60 / CLOCKS_PER_SEC);
		}
		else if (ch == 'S') {
			break;
		}
	}
	return 0;
}