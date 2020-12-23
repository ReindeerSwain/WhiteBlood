#include <stdio.h>
#include <math.h>
 
int main(){
	int T,m,n,t=0;
	int a[200];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d %d",&m,&n);
		for(int j=m;j<=n;j++){
			int x,x2,x3,k;
			k=j;
			x=k%10;
			k=k/10;
			x2=k%10;
			k=k/10;
			x3=k%10;
			if(pow(x,3)+pow(x2,3)+pow(x3,3)==j){
			a[t]=j;
			t++;
			}
		}
		if(t==0)
		printf("-1\n");
		else{
		for(i=0;i<t-1;i++){
			printf("%d ",a[i]);
		}
		printf("%d\n",a[t-1]);
		}
		
	}
}
