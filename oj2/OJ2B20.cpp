#include<stdio.h>
#include<string.h>
int main (void)
{
	char sentence[200];
	int M,i,j,len;
	scanf("%d\n",&M);
	gets(sentence);
	len=strlen(sentence);
	for (i=0;i<M;i++)
	  {
	    printf("%c",sentence[len-M+i]);
      }
    for (j=0;j<len-M;j++)
      {
      	printf("%c",sentence[j]);
	  }
	return 0;
}

