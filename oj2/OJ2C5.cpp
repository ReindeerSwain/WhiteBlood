#include <string.h>
#include <stdlib.h>
int main(void){
	int n,i,x,len,j;
	char a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&x);
    	itoa(x,a,10);
        len = strlen(a)-1;
    	for(j=0;j<len;j++){
    		b[j]=a[len-j];
    	}
		for(j=0;j<len;j++){
			if(a[j]==b[j]){
			printf("Yes\n");}
			else 
			printf("No\n");
			break;}	 
	}
	return 0; 
}
