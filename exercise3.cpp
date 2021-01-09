#include<stdio.h>
void proc()
{
 int a,i,j;
 scanf("%d",&a);
 if((a%2==0)||(a<=0))//是或不是与 
 {
  printf("error\n");
 }
 else
 {
  printf("print\n");
  for(i=1;i<=((a+1)/2);i++)
  {
   for(j=1;j<=((a+1)/2)-i;j++)
   {
    printf(" ");
   }
   for(j=1;j<=(2*i-1);j++)
   {
    printf("*");
   }
   printf("\n");
  }
  for(i=((a+1)/2)-1;i>=1;i--)
  {
   for(j=1;j<=((a+1)/2)-i;j++)
   {
    printf(" ");
   }
   for(j=1;j<=(2*i-1);j++)
   {
    printf("*");
   }
   printf("\n");
  }
 }
}
int main()
{
 int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  proc();
 }
 return 0;
}
