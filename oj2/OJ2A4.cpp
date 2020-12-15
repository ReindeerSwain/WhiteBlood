#include <stdio.h>
//ÓÃ×Ö·û´®´¦Àí 
int main(void){
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a >= 0 && b >= 0 && a<=10^500 && b<=10^500){
		c=a*b;
		printf("%d\n",c);	
		}
	}
	return 0;
} 
