#include<stdio.h>
#include<math.h>
void proc()
{
 char a[10][60]={"*****    ************   **************************", 
       "*   *    *    *    **   **    *        **   **   *",
       "*   *    *    *    **   **    *        **   **   *",
       "*   *    **************************    ***********",
       "*   *    **        *    *    **   *    **   *    *",
       "*   *    **        *    *    **   *    **   *    *",
       "*****    ***********    ***********    ***********" 
     };
 int b,i,j,n=0,c,x;
 scanf("%d",&b);
 printf("%d:\n",b);
 do
 {
  n++; 
 }
 while(b/(int)(pow(10,n)));
 char d[7][(n-1)*7+5];
 for(i=0;i<7;i++)
 {
  for(j=0;j<n;j++)//�жϵڼ����� 
  {
   c=(int)(b/pow(10,n-j-1))%10;
   for(x=0;x<5;x++)
   {
    d[i][j*7+x]=a[i][c*5+x];
   }
   if((j*7+x+1)<((n-1)*7+5))//if(x+1<(n-1)*7+5)
   {
    d[i][j*7+x]=' ';
    d[i][j*7+x+1]=' ';
   }
  }
 }
 for(i=0;i<7;i++)
 {
  for(j=0;j<((n-1)*7+5);j++)
  {
   printf("%c",d[i][j]);
  }
  printf("\n");
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
} 
