#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,z;
	printf("请输入你的生日：");
	scanf("%d",&x);
	printf("年\n");
	scanf("%d",&y);
	printf("月\n");
	scanf("%d",&z);
	printf("日\n\n\n\n\n");
	
	if (x==2002,y==9,z==26)
	printf ("生日快乐！
	ミ ゛ミ ∧＿∧ ミ゛ミ
    ミ ミ ( ??? )ミ゛ミ
    ゛゛ ＼　　　／゛゛
　　 　 i⌒ヽ ｜
　　 　   (＿) ノ
　　　　　 ∪\n\n");
	if (x==2001,y==11,z==30)
	printf ("这是谁的生日啊？\n\n");
	if (x==2001,y==11,z==24)
	printf ("该死！"); 
	else printf("平淡的一天\n\n");
	
	system("pause");
	return 0; 
}
