#include <stdio.h>
#include <string.h>

int main(void){
	int N,i,n;
	float sum=0,average;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&n);
		sum=sum+n;
	}
	average=sum/N;
	printf("%.2f",average);
}
