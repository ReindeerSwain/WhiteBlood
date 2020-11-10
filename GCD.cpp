#include <stdio.h> 
#include <stdlib.h>

int main(){
	int a,b,c;
	printf("请输入数字1："); 
	scanf("%d",&a);
	printf("请输入数字2：");
	scanf("%d",&b);
	while(1){
		if(b==0){
			printf("最大公约数为：%d\n\n",a);
			break;
		}
		c=a%b;
		a=b;
		b=c;
	    
	}
	system("pause");
	return 0;
}
