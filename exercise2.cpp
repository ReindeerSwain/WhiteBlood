#include<stdio.h>
void proc()
{
 int a,b,c,i,n=0;
 scanf("%d%d%d",&a,&b,&c);
 for(i=0;i<b;i++)
 {
  if(i==4||i==6||i==9||i==11)
  {
   n+=30;
  }
  else if(i==2)
  {
   if((a%4==0&&a%100!=0)||(a%400==0))
   {
    n+=29;
   }
   else
   {
    n+=28;
   }
  }
  else if(i!=0)
  {
   n+=31;
  }
 }
 printf("%d\n",n+c);
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
