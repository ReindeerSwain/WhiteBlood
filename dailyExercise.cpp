#include <stdio.h>
#include <string.h>

int main(){
	char a[200],b[200],t;
	fgets(a,200,stdin);
	int len,i,j;
	len=strlen(a)-1;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	if(len%2==0){
	for(i=0;i<(len/2);i++)
	  printf("%c",a[i]);
	for(i=len-1;i>=(len/2);i--)
	  printf("%c",a[i]);
	} 
	else if(len%2!=0){
	for(i=0;i<(len/2);i++)
	  printf("%c",a[i]);
	for(i=len-1;i>(len/2);i--)
	  printf("%c",a[i]);
	}
}
