#include <stdio.h>

int main()
{
	int x,y;
	printf("������24h��ʱ�䣺");
	scanf("%d:%d",&x,&y);
	if(x>12){
	x=x-12;
	printf("12h��ʱ��Ϊ��%d:%.2dPM\n",x,y);}
	else printf("12h��ʱ��Ϊ��%d:%.2dAM\n",x,y);
	return 0;
}
