#include <stdio.h>

int main(void)
//ax + by =m
//cx + dy =n

{
	int a, b, c, d, m, n, x, y;
	printf("ax + by =m\n");
	printf("cx +dy =n\n");
	printf("请输入二元一次方程的参数：");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	printf("d:");
	scanf("%d",&d);
	printf("m:");
	scanf("%d",&m);
	printf("n:");
	scanf("%d",&n);
	x = (b*n - d*m)/(b*c - a*d);
	y = (c*m - a*n)/(b*c - a*d);
	printf("x=%d y=%d\n",x,y);
	return 0;
}
