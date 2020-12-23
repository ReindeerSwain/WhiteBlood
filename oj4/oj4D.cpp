#include <stdio.h>
#include <string.h>

int main(){
	char a[200];
	int len;
	fgets(a,200,stdin);
	len=strlen(a)-1;
	printf("%d",len);
}
