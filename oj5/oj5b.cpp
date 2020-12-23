#include <stdio.h>

int main(){
	int k,x,j,a,b;
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%d",&x);
		if(2<=x&&x<=10000){
		
		for(a=2;a<=x;a++){
		while(x!=a){
			if(x%a==0){
				printf("%d*",a);
				x/=a;
			}else{
				break;
			}
		}
	}
	printf("%d\n",x);

	}
}

}
