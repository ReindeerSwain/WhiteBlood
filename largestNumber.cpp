#include <stdio.h>

int main(){
	
	float i;
	float x=0;
	while(1){
	
    printf("���������֣�"); 
	scanf("%f",&i);
    if(i==0||i<0){
    	printf("���ֵΪ��%.2f",x);
    	break;
	}
	else if(i>x)
	x=i;
	
	
	}
	return 0;
}
