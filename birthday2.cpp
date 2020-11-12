#include <stdio.h>
#include <stdlib.h>
int main()
{ 
	

	int x,y,z,n,i=1;
	while (i==1){
	
	printf("是否进入程序？\n请输入1（是）或2（否）：");
	scanf("%d",&n);	
	switch(n) {
	case 1:
	
	printf("\n请输入你的生日：\n年：");


		scanf("%d",&x);

	printf("月:");
	scanf("%d",&y);
	printf("日:");
	scanf("%d",&z);
	printf("\n\n");
	
	{if (x==2002,y==9,z==26)
	printf ("这是谁的生日啊？\n\n");
	
	else printf("平淡的一天呢。\n\n");} 
	{if (x==2001 , y==11, z==24)
	printf ("该死！\n\n\n\n");
	}
    break;
	case 2:   
	i=2;
    break;}
	
   
}

	printf("\n\n\n\n程序已经退出！\n\n\n");
		system("pause");
    return 0;


}

