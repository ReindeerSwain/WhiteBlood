#include <stdio.h>
#include <string.h>

int main(){
	int len,n,x=0,y=0,j,m,p=0;
	char a[200],odd[200],even[200];
	
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		fgets(a,200,stdin);
		len=strlen(a)-1;
		for(j=0;j<len;j++){
			if(a[j]==' '||a[j]=='\n'){
				for(m=p;m<j;m++){
					if(a[m]%2==0)
				{even[x]=a[m];
				x++;
				}
				else if(a[m]%2!=0) {
					odd[y]=a[m];
					y++;
				}
				p=j;
				}
				
				
			}
		}
		int len1,len2,t,k;
		len1=strlen(odd);
		len2=strlen(even);
		for(j=0;j<len1-1;j++){
			for(k=0;k<len1-j-1;k++){
				if(odd[k]>odd[k+1]){
					t=odd[k];
					odd[k]=odd[k+1];
					odd[k+1]=t;
				}
			}
		}
		for(j=0;j<len2-1;j++){
			for(k=0;k<len2-j-1;k++){
				if(even[k]>even[k+1]){
					t=even[k];
					even[k]=even[k+1];
					even[k+1]=t;
				}
			}
		}
		for(j=0;j<len1;j++)
		 printf("%c ",odd[j]);
		for(j=0;j<len2-1;j++) 
		 printf("%c ",even[j]); 
		printf("%c\n",even[len2-1]);
		x=0;
		y=0;
		for(j=0;j<len1;j++)
		 odd[j]=0;
		for(j=0;j<len2;j++)
		 even[j]=0;
	}
}
