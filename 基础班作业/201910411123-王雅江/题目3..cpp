#include<stdio.h>   
int change(int a, int b) {
	if (b == 0) return a;
	else return change(b, a % b);
}
int main() {
	int a, b;
	while (scanf_s("%d%d", &a, &b) != EOF) {
		int tmp = change(a, b);
		printf("%d/%d\n", a / tmp, b / tmp);
	}
	return 0;
}