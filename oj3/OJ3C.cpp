#include <stdio.h>

int num(int i) {
  int j;
  for(j=2;j<i;j++) {
     if (i%j==0) 
     return 0;
	 }
	 return 1;
}

int main (void) {
     int n,i,m;
     scanf("%d", &n);
     if(n%2 != 0||n<=6) 
       {
	   printf ("ERROR\n");
       return 0;} 
     for(i=2;i<=n/2;i++) {
         m=n-i;
         if (num(m)&&num(i)) 
         printf ("%d %d\n", i, m) ;
}

return 0;
}
