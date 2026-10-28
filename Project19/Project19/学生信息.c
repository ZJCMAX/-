# include <stdio.h>
# include<string.h>
struct student {//声明一个结构体
	char name [20];
	int age;
	int number;
};
void do_change(struct student*a,struct student*b){//构建函数
	struct student temp;
    temp = *a;
	*a = *b;
	*b = temp;	
}
void printstudent(struct student s) {
	printf("name:%s\n", s.name);
	printf("age:%d\n", s.age);
	printf("number:%d\n", s.number);
}
int main() {
	struct student s1;//访问结构体
	printf("enter s1 age");
	scanf_s("s1age%d",&s1.age);//输入
	printf("enter s1 number");
	scanf_s("s1number%d",&s1.number);
	printf("enter s1 name");
	scanf_s("s1name%s", s1.name, sizeof(s1.name));
	struct student s2;
	printf("enter s2 age");
	scanf_s("s2age%d", &s2.age);
	printf("enter s2 number");
	scanf_s("s2number%d", &s2.number);
	printf("enter s2 name");
	scanf_s("s2name%s", s2.name, sizeof(s2.name));
	printstudent(s1);
	printstudent(s2);
	do_change(&s1,&s2);
	printstudent(s1);
	printstudent(s2);
	return 0;
}
