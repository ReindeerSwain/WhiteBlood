#include <stdio.h>

int main(void){
	int a,b,c,n,max,x1,x2;
	
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a>b&&a>c)
		{
		  max=a;
		  x1=b;
		  x2=c;}
		else if(b>a&&b>c)
		{
		  max=b;
		  x1=a;
		  x2=c;}
		else if(c>a&&c>b)
		{
		  max=c;
		  x1=a;
		  x2=b;}
		if(max*max==x1*x1+x2*x2)
		printf("Yes\n");
		else printf("No\n");
		
	}
	return 0;
}
