#include <stdio.h>
#include <stdlib.h>

int main()

{
	int x,y,z,m,n;
	printf("������ISBN:");
	scanf("%d-%d-%d-%d-%d",&x,&y,&z,&m,&n);
	
	printf("\n\nGSI prefix:%d\n",x);
	printf("Group identifier:%d\n",y);
	printf("����ţ�%d\n",z);
	printf("��Ŀ��ţ�%d\n",m);
	printf("Check digit:%d\n\n",n);
	
	system("pause");
	return 0;
 } 
