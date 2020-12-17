#include <stdio.h>
#include <math.h>

int main(){
	int m,i,max;
	int a[200];
	
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		
	}
	
	max=abs(a[0]);
	
	for(i=1;i<m;i++){
		if(abs(max)<abs(a[i]))
		max=a[i];
	}
	printf("%d",max);
	
}
