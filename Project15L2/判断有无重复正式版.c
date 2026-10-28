# include <stdio.h>
int main() {
	int a[3][3];//创建一个三乘三的矩阵
	int c = 0, d = 0;
	int true = 1;
	int false = 0;
	for (c = 0; c < 3; c++) {//填入
		for (d = 0;d < 3;d++) {
			printf("enter the nmuber");
			scanf_s("%d", &a[c][d]);
		}
	}
	for (c = 1; c < 3; c++) {//检查列
		if (a[c][0] == a[c][1] && a[c][1] == a[c][2] && a[c][2] == a[c][0]) {
			printf("flase,you can not live here");
			return 0;
		}
	}
	for (d = 0;d < 3;d++) {//检查行
		if (a[0][d] == a[1][d] && a[1][d] == a[2][d] && a[2][d] == a[0][d]) {
			printf("flase,you can not live here");
			return 0;
		}
	}
	printf("true,you live here ");
	return 0;
}
