#include <stdio.h>

int main()
{
	int x,y;
	printf("请输入24h制时间：");
	scanf("%d:%d",&x,&y);
	if(x>12){
	x=x-12;
	printf("12h制时间为：%d:%.2dPM\n",x,y);}
	else printf("12h制时间为：%d:%.2dAM\n",x,y);
	return 0;
}
