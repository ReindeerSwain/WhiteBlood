#include <stdio.h>
#include <string.h>
#define N 2


int main() {
	char a[1];
	int len = 0;
	int a[N] = { 0 }, i;


	printf("请输入要转换的车牌号:");
	for (i = 0; i < N; i++)
		a[i] = getchar();

	printf("%x")

	
	while (a[1]!= '\n') {
		len++;
		a[1] = getchar();
	}
	;

	printf("In reverse order:");
	for (i = N - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
