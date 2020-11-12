#include <stdio.h>
#include <stdlib.h>

int main()

{
	int x,y,z,m,n;
	printf("请输入ISBN:");
	scanf("%d-%d-%d-%d-%d",&x,&y,&z,&m,&n);
	
	printf("\n\nGSI prefix:%d\n",x);
	printf("Group identifier:%d\n",y);
	printf("出版号：%d\n",z);
	printf("项目编号：%d\n",m);
	printf("Check digit:%d\n\n",n);
	
	system("pause");
	return 0;
 } 
