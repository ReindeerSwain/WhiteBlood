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
	std::cout<<"\n\t\t*1.��������*\n";
	std::cout<<"\n\t\t*2.��    ��*\n";
	std::cout<<"\n\t\t*������1��2*\n";
	std::cout<<"\n\t\t*----------*\n";
	
	std::cout<<"\t\tѡ��";
	char x;
	std::cin>>x;
	
	switch (x){
	case '1':
		std::cout<<"\n\t\t����x��x��x�յĸ�ʽ��������\n";
		opt = Out();
		break;
		
	case '2':
		std::cout<<"\n\t\t��ѡ���˳�\n";
		opt = false;
		break;
	}
}
std::cout<<"\n\t\t�˵����˳���\n";
system("pause");
}
int Out()


{
		int x,y,z;
	printf("���������ڣ�");
	scanf("%d��%d��%d��",&x,&y,&z);


	
	
	{if (x>=2002&&y==9&&z==26)
	printf ("\n\n\n�����ǿ���������ʲô���Ӱ�����������հ������տ��֣�\n\n");
	else if (y==5,z==1)
	printf ("\n\n\n�������Ͷ��ڿ��֣���\n\n");
		else if (y==1,z==1)
	printf ("\n\n\n�µ�һ�꣡��һ��Ҫ���֣���\n\n");
		else if (y==10,z==31)
	printf ("\n\n\n��ʥ�ڵ��ˣ�����\n\n");
		else if (y==12,z==25)
	printf ("\n\n\nʥ�����֣����յ���������\n\n");
	
	else if (x>=2001,y==11,z==30)
	printf ("\n\n\nһ���������𽥺��ƵĿ����˵����ա�����\n\n");
	
	else printf("\n\n\n����ƽ����һ���ء�\n\n");} 
	{if (x>=2001,y==11,z==24)
	printf ("������\n\n\n\n");
	}



}
