# include <stdio.h>
# include <time.h>
int main()
{
	clock_t a, b;
	double c;
	printf("please print enter to star");
	getchar ();
	a= clock ();
	printf("please print enter to stop");
	getchar ();
	b = clock();
	printf("the time is %f", c =(double)( b - a)/60/CLOCKS_PER_SEC);

	return 0;
}