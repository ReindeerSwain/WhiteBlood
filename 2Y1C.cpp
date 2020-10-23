#include <stdio.h>
#include <stdlib.h> 
int main(void)
//ax + by =m
//cx + dy =n

{
float a, b, c, d, m, n, x, y;
	printf("ax + by =m\n");
	printf("cx +dy =n\n");
	printf("请输入二元一次方程的参数：");
	printf("a:");
	scanf("%f",&a);
	printf("b:");
	scanf("%f",&b);
	printf("c:");
	scanf("%f",&c);
	printf("d:");
	scanf("%f",&d);
	printf("m:");
	scanf("%f",&m);
	printf("n:");
	scanf("%f",&n);
	x = (b*n - d*m)/(b*c - a*d);
	y = (c*m - a*n)/(b*c - a*d);
	printf("x=%f y=%f\n",x,y);
	system("pause");
	return 0;
}
