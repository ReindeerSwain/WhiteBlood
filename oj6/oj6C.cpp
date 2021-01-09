#include <stdio.h>
#include <string.h>

int main(void){
	int N;
	char a[200],b[200];
	scanf("%d",&N);
	getchar();
	for(int i=0;i<N;i++){
		scanf("%c",&a[i]);
	}
	float sum=0,average;
	int n=0,x=0,len;
	len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]!='n'&&a[i+1]!='/'&&a[i+2]!='a')
		{
		b[n]=a[i];
		n++;
	}
		else if(a[i]=='n'&&a[i+1]=='/'&&a[i+2]=='a') x++;
	}
	average=sum/(N-x);
	if(x==N)
	printf("n/a");
	else
	printf("%.2f",average);
}
