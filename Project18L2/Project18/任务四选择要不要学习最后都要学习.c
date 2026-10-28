# include <stdio.h>
void do_case(int c) {//创建函数
	if (c > 0) {
		while (1) {
			int b = 0;
			int c = 0;
			printf("enter a positive integer\n");
			scanf_s("%d", &c);
			if (scanf_s("%d", &c) != 1) {//输入错误判断
				printf("care for mentally retarded children,we stay together\n");
			}
			while (getchar() != "\n");
			continue;
			if (c != 0) {
				printf("%d %d %d %d %d %d %d %d %d", c * 1, c * 2, c * 3, c * 4, c * 5, c * 6, c * 7, c * 8, c * 9);//输出乘法口诀
			}			
		}
	}
}
void do_case2(void){
	printf("I reflect on myself three times a day : Tall? handsome? rich? Nope-go hit the book\n");
}
int main() {//主函数
	char ch ;
	int a = 0;
	int b = 0;
	printf("enter a number 1(I want to study well) 2(I want a grilfriend ) 3(I want lot of money ) 4(I wnat to be a senior tech guru) \n");
	scanf_s("%d", &a);
	switch (a) {
	case 1:
		do_case(a);//调用函数
		break;
	case 2:
		do_case2();
		do_case(a);
		break;
	case 3:
		printf("what do you want to do when you get money A(get a girlfriend) B(buy math book)");
		scanf_s(" %c", &ch, 1);
		if (ch == 'A') {
			do_case2();
			do_case(a);
		}
		if (ch == 'B') { do_case(a); }
		break;
	case 4:
		printf("why you want to learn technoligy A(get money)B(learning)");
		scanf_s(" %c", &ch, 1);
		if (ch == 'A') {
			do_case2();
			do_case(a);
		}
		if (ch == 'B') {
			do_case(a);
		}break;
	}
	return 0;
}






