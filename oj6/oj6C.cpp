#include <stdio.h>

int main(void){
	int N;
	float a[200];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%c",&a[i]);
	}
	float sum=0,average;
	for(int i=0;i<N;i++){
		if(a[i]!='n/a')
		sum=sum+a[i];
		else sum=sum;
	}
	average=sum/N;
	printf("%.2f",average);
}
