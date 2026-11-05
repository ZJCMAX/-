# include <stdio.h>
struct snake {
	int length;
	int length2;
};
int main() {
	struct snake s1 = { 3,0 };
	int food = 0;
	printf("enter the food");
	scanf_s("%d", &food);
	if (food <= s1.length) {
		s1.length2 = food + s1.length;
	}
	else {
		printf("the sanke is death the length is %d",s1.length);
		return 0;
	}
	while (1) {
		printf("enter the food");
		scanf_s("%d", &food);
		if (food > s1.length2) {
			printf("the sanke is death the length is %d", s1.length2);
			break;
		}
		else {
			s1.length2 += food;
		}
	}
	return 0;
}