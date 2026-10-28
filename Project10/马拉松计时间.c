# include <stdio.h>
# include <time.h>
int main()
{
	clock_t a, b;
	double c;
	printf("please print enter to star");//初始时间
	getchar ();
	a= clock ();
	printf("please print enter to stop");//结束时间
	getchar ();
	b = clock();//时间函数
	printf("the time is %f", c =(double)( b - a)/60/CLOCKS_PER_SEC);//计算差值

	return 0;
}
