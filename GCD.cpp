#include <stdio.h> 
#include <stdlib.h>

int main(){
	int a,b,c;
	printf("����������1��"); 
	scanf("%d",&a);
	printf("����������2��");
	scanf("%d",&b);
	while(1){
		if(b==0){
			printf("���Լ��Ϊ��%d\n\n",a);
			break;
		}
		c=a%b;
		a=b;
		b=c;
	    
	}
	system("pause");
	return 0;
}
