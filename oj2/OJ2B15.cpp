#include <stdio.h>
#include <string.h>
int main(void){
	int M,i,len;
	char a[200],b[200];
	scanf("%d",&M);
	getchar();
	fgets(a,200,stdin);
	len = strlen(a)-1;
	for(i=0;i<M;i++){
		b[i]=a[len-M+i];	
	}
	for(i=len-1;i>=M;i--){
		b[i]=a[i-M];
	}
	printf("%s",b);
	return 0;
}
