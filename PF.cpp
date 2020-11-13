#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,x=1,y;
	printf("请输入任意一个正整数n，程序将输出1~n的所有偶数平方:");
	scanf("%d",&n);
	printf("x\t x^2\n");
	while(x<=n){
		y=x*x;
		
		if(x%2==0)
		printf("%d\t %d\n",x,y);
		
		x++;
	}
	return 0;
}
