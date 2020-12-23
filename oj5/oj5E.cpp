#include<stdio.h>

int main()
{
    int m,n,i,j=0,t;
    int b[200];
    
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
      scanf("%d",&b[i]);
    for(i=m;i<(m+n);i++)
      scanf("%d",&b[i]);
   
    for(i=0;i<(m+n-1);i++){
      for(j=0;j<(m+n-1-i);j++){
        if(b[j]>b[j+1]){
          t=b[j];
          b[j]=b[j+1];
          b[j+1]=t;
        }
    }
    }
    for(i=0;i<(m+n-1);i++)
      printf("%d ",b[i]);
    printf("%d",b[m+n-1]);
}
