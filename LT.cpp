#include <stdio.h> 
#include <stdlib.h>

int main(){
	int a,b,c,f,g;
	printf("��������ӣ�"); 
	scanf("%d",&a);
	printf("�������ĸ��");
	scanf("%d",&b);
		f=a;
		g=b;
	while(1){
		if(g==0){
			a=a/f;
			b=b/f;
			printf("�����Ϊ��%d/%d\n\n",a,b);
			break;
		}
	
		c=f%g;
		f=g;
		g=c;
		
	    
	}
	system("pause");
	return 0;
}
