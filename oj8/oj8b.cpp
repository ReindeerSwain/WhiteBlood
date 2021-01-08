#include <stdio.h>

int main(){
	int n,i,k,t,m,x;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m<1||m>100){
			printf("ERROR\n");
			break;
		}
		for(int j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		for(int j=0;j<m-1;j++){
    for(k=0;k<(m-j-1);k++){
       if(a[k]>a[k+1]){
      t=a[k];
      a[k]=a[k+1];
      a[k+1]=t;
     }
    }
   }
  if(a[0]==a[m-1])
   printf("ERROR\n");
  else
  for(k=1;k<m;k++){
   if(a[k]>a[0]){
    for(x=(k+1);x<m;x++){
      if (a[x]>a[k]) {
      printf("%d\n",a[k]);
      break;
     }
    }
    if(a[x]>a[k]) 
    break;
   }
  if(a[m-1]==a[k]){
  printf("ERROR\n");
  break;
    }
  }
	}
}

