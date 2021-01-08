#include <stdio.h>
#include <math.h>

int main(){
	int n,i;
	float m,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%f",&m);
		x=sqrt(m);
		if(m<0)
		printf("ERROR\n");
		else
		printf("%.2f\n",x);
	}
} 
