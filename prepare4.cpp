#include <stdio.h>

int main(){
	unsigned char a[9]={0};
	
	unsigned char *p,*q,i;
	
	printf("������Ҫת���ĳ��ƺţ�");
	for(i = 0;i < 9;i++)
	  a[i] = getchar();
	
	
	
	for(p = &a[0];p < &a[9];p++){
	
	  if((*p & 0b10000000)&&(*(p+1)) & 0b10000000 ){
	    q=&a[i];
	    printf("�������к��֣�����Ϊ��%c%c\n",a[0],a[1]);
	    printf("�ú��ֵ�GBK��Ϊ��0x%x%x\n",a[0],a[1]);
	    break;}
	  else
	   {
		 printf("û�к��֣�%s",a);
	    break;}
	    
}
    return 0;
}
