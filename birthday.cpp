
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
	std::cout<<"\n\t\t*1.输入生日*\n";
	std::cout<<"\n\t\t*2.退    出*\n";
	std::cout<<"\n\t\t*请输入1或2*\n";
	std::cout<<"\n\t\t*----------*\n";
	
	std::cout<<"\t\t选择：";
	char x;
	std::cin>>x;
	
	switch (x){
	case '1':
		std::cout<<"\n\t\t请以x年x月x日的格式输入你的生日\n";
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
	printf("请输入你的生日：");
	scanf("%d年%d月%d日",&x,&y,&z);


	
	
	{if (x==2002,y==9,z==26)
	printf ("让我们看看今天是谁的生日？是你啊！生日快乐！\n\n");
	
	
	else if (y==11,z==30)
	printf ("这是谁的生日啊？\n\n");
	
	else printf("真是平淡的一天呢。\n\n");} 
	{if (x==2001,y==11,z==24)
	printf ("该死！\n\n\n\n");
	}



}
