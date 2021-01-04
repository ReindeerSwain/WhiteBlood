#include <stdio.h>
#include <string.h>

int main(void){
	int sum,num[15];
	for(int i=0;i<10;i++){
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	
	int a[200];
	int j=0,sum0=0;
	for(int i=0;i<10;i++){
		for(;j<(sum0+num[i]);j++){
			a[j]=i;
		}
		sum0=sum0+num[i];
		j=sum0;
	}
	
	int t,i,n=0;
	for(i=0;i<sum-1;i++){
	for(j=0;j<(sum-i-1);j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}	
	}
	if(a[0]==0){
	    for(i=0;i<sum;i++){
		if(a[i]!=0){
			a[0]=a[i];
			a[i]=0;
			break;
		}
	}
	}

	for(i=0;i<sum;i++)
	  printf("%d",a[i]);
}
