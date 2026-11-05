# include <stdio.h>
# include<string.h>
struct student {
	char name [20];
	int age;
	int number;
};
void change(struct student*a,struct student*b){
	struct student temp;
    temp = *a;
	*a = *b;
	*b = temp;	
}
void printstudent(struct student s) {
		printf("name:%s\n", s.name);
		printf("age:%d\n",  s.age);
		printf("number:%d\n",s.number);
}
int main() {
	struct student s[3];
	for (int i = 1;i <= 2 ;i++) {	
		printf("enter s%d age",i);
		scanf_s("%d", &s[i].age);
		printf("enter s%d number",i);
		scanf_s("%d", &s[i].number);
		printf("enter s%d name",i);
		scanf_s(" %s", s[i].name, sizeof(s[i].name));
		printstudent(s[i]);
		
	}
	change(&s[1], &s[2]);
	printstudent(s[1]);
	printstudent(s[2]);
	return 0;
}
	/*struct student s1;
	printf("enter s1 age");
	scanf_s("%d",&s1.age);
	printf("enter s1 number");
	scanf_s("%d",&s1.number);
	printf("enter s1 name");
	scanf_s(" %s", s1.name, sizeof(s1.name));
	/* struct student s2;
	printf("enter s2 age");
	scanf_s("%d", &s2.age);
	printf("enter s2 number");
	scanf_s("%d", &s2.number);
	printf("enter s2 name");
	scanf_s(" %s", s2.name, sizeof(s2.name));
	printstudent(s1);
	printstudent(s2);
	do_change(&s1,&s2);  
	printstudent(s1);
	printstudent(s2);
	return 0;
}*/

