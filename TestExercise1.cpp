#include <stdio.h>

int age(int a,int k,int n); 

int main(void){
	int a,k,n;
	scanf("%d %d %d",&n,&a,&k);
	if(n<2||a<=0||a>100||k<=0||k>100)
	printf("Wrong Number!");
	else
	printf("%d",age(a,k,n));
}

int age(int a,int k,int n){
	if(n==1)
	return a;
	else
	return (k+age(a,k,n-1));
}
