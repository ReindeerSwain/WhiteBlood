#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,n,num,k,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&num);
    k=num;
    while(k>0)
    {
       m=m*10+k%10;
       k=k/10;
    }
       if(m==num)
        printf("Yes\n");
       else
        printf("No\n");
		m=0;}
    return 0;
}
