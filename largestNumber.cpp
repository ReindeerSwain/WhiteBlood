#include <stdio.h>

int main(){
	
	float i;
	float x=0;
	while(1){
	
    printf("请输入数字："); 
	scanf("%f",&i);
    if(i==0||i<0){
    	printf("最大值为：%.2f",x);
    	break;
	}
	else if(i>x)
	x=i;
	
	
	}
	return 0;
}
