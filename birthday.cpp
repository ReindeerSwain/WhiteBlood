#include <stdlib.h>
#include <iostream>

void Menu();
int  Out();

int main()
{
	Menu();
	return 0;
}
void Menu() 
{
bool opt = true;
while(opt == true)
{
	std::cout<<"\n\t\t*----------*\n";
	std::cout<<"\n\t\t*1.输入日期*\n";
	std::cout<<"\n\t\t*2.退    出*\n";
	std::cout<<"\n\t\t*请输入1或2*\n";
	std::cout<<"\n\t\t*----------*\n";
	
	std::cout<<"\t\t选择：";
	char x;
	std::cin>>x;
	
	switch (x){
	case '1':
		std::cout<<"\n\t\t请以x年x月x日的格式输入日期\n";
		opt = Out();
		break;
		
	case '2':
		std::cout<<"\n\t\t你选择退出\n";
		opt = false;
		break;
	}
}
std::cout<<"\n\t\t菜单已退出！\n";
system("pause");
}
int Out()


{
		int x,y,z;
	printf("请输入日期：");
	scanf("%d年%d月%d日",&x,&y,&z);


	
	
	{if (x>=2002&&y==9&&z==26)
	printf ("\n\n\n让我们看看今天是什么日子啊？是你的生日啊！生日快乐！\n\n");
	else if (y==5,z==1)
	printf ("\n\n\n好诶！劳动节快乐！！\n\n");
		else if (y==1,z==1)
	printf ("\n\n\n新的一年！！一定要快乐！！\n\n");
		else if (y==10,z==31)
	printf ("\n\n\n万圣节到了！！！\n\n");
		else if (y==12,z==25)
	printf ("\n\n\n圣诞快乐！！收到礼物了吗？\n\n");
	
	else if (x>=2001,y==11,z==30)
	printf ("\n\n\n一个发际线逐渐后移的可怜人的生日。。。\n\n");
	
	else printf("\n\n\n真是平淡的一天呢。\n\n");} 
	{if (x>=2001,y==11,z==24)
	printf ("该死！\n\n\n\n");
	}



}
