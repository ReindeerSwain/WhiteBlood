#include <stdio.h>

int main(){
	unsigned char a[9]={0};
	int i;
	
	printf("������Ҫת���ĳ��ƺţ�");
	for(i = 0;i < 9;i++)
	  a[i] = getchar();
    
	printf("%c%c",a[0],a[1]);
	printf("0x%x%x\n",a[0],a[1]);
	
	return 0; 
}
