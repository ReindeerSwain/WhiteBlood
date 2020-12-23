#include <stdio.h>
#include <string.h>

int main(){
	char a[200];
	int k,j=0,len;
	fgets(a,200,stdin);
	len=strlen(a)-1;
	for(int i=0;i<len;i++){
		if(a[i]==' '||a[i]=='\n')
		{
		for(k=i-1;k>=j;k--){
		printf("%c",a[k]);
		}     
             if(a[i]!='\n')
             printf(" ");    
             j=i;
		}
	    
	}
}
