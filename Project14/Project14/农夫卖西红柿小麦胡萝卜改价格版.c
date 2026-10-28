# include <stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	int c = 7;
	int d = 8;
	int e = 0;
	int m = 0;
	int g = 0;//初始数据和变量命名
	while (g <= 1000) {//大循环直到1000元及以上
		char ch;
		printf("please choice M or S");//选择卖或不买
		scanf_s(" %c", &ch, 1);
		if (ch == 'M') {//改价格
			printf("please enter the income type wheat W onion O tomato T carrot C\n");
			scanf_s(" %c", &ch, 1);
			if (ch == 'W') {
				printf("please change your price");
				scanf_s(" %d", &a);
			}
			else if (ch == 'O') {
				printf("please change your price");
				scanf_s(" %d", &b);
			}
			else if (ch == 'T') {
				printf("please change your price");
				scanf_s(" %d", &c);
			}
			else if (ch == 'C') {
				printf("please change your price");
				scanf_s(" %d", &d);
			}
		}
			 if (ch == 'S') {//卖出计算价格
				printf("please enter the income type wheat W onion O tomato T carrot C\n");
				scanf_s(" %c",&ch ,1);
				printf("please enter the weight ");
				scanf_s(" %d",&e);
				if (ch == 'W') { m = a * e; }
				else if (ch == 'O') {
					m = b * e;
					printf("the income is %d",m);
				}
			 }
			 else if (ch == 'T') { m = c * e; }
		else if (ch == 'C') { m = d * e; }
		g += m;	//累加
	}
	printf("income of all is %d you can rest now\n", g);
	return 0;
}
