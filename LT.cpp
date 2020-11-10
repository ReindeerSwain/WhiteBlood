#include <stdio.h> 
#include <stdlib.h>

int main(){
	int a,b,c,f,g;
	printf("请输入分子："); 
	scanf("%d",&a);
	printf("请输入分母：");
	scanf("%d",&b);
		f=a;
		g=b;
	while(1){
		if(g==0){
			a=a/f;
			b=b/f;
			printf("最简数为：%d/%d\n\n",a,b);
			break;
		}
	
		c=f%g;
		f=g;
		g=c;
		
	    
	}
	system("pause");
	return 0;
}
