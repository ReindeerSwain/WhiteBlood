#include <stdio.h>

int main(){
	unsigned char a[9]={0};
	
	unsigned char *p,*q,i;
	
	printf("请输入要转换的车牌号：");
	for(i = 0;i < 9;i++)
	  a[i] = getchar();
	
	
	
	for(p = &a[0];p < &a[9];p++){
	
	  if((*p & 0b10000000)&&(*(p+1)) & 0b10000000 ){
	    q=&a[i];
	    printf("车牌中有汉字，汉字为：%c%c\n",a[0],a[1]);
	    printf("该汉字的GBK码为：0x%x%x\n",a[0],a[1]);
	    break;}
	  else
	   {
		 printf("没有汉字：%s",a);
	    break;}
	    
}
    return 0;
}
