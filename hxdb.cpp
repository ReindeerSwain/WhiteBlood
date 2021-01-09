#include <stdio.h>
void proc()
{ 
 int a,b,c,m,t=0;
 scanf("%d%d%d",&a,&b,&c);
 for(m=10;m<=100;m++)
 {
  if(m%3==a)
  {
   if(m%5==b)
   {
    if(m%7==c)
    {
     t=m;
     goto end;
    }
   }
  }
 }
 end:
  if(t==0)
  {
   printf("Impossible\n");
  }
  else
  {
   printf("%d\n",t);
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
