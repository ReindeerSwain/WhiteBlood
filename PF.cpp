#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,x=1,y;
	printf("����������һ��������n���������1~n������ż��ƽ��:");
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
