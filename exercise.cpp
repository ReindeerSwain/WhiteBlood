#include<stdio.h>
void proc()
{
 int n,k=5,a=0;
 scanf("%d",&n);
 while(n/k)
 {
  a+=n/k;
  k*=5;
 }
 printf("%d\n",a);
}
int main()
{
 int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  proc();
 }
}
