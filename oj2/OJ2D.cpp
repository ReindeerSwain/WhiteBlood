#include <stdio.h>
void SR(int c,int a[100][100],int b[100],int e,int f,int i1);
void SC(int r,int a[100][100],int b[100],int e,int f,int i1);
void IR(int c,int r,int a[100][100],int b[100],int T,int i2,int i1);
void IC(int r,int c,int a[100][100],int b[100],int T,int i2,int i1);
void DR(int c,int r,int a[100][100],int b[100],int m,int i1);
void DC(int r,int c,int a[100][100],int b[100],int m,int i1);
int main(){
   int a[100][100],b[100];
   char x[3];
   int r,c,i,j,n,k;
   
   scanf("%d %d",&r,&c);
   for(i=0;i<r;i++){
   	for(j=0;j<c;j++){
   	   scanf("%d",&a[i][j]);
	   }
   }
   scanf("%d",&n);
   for(k=0;k<n;k++){
   	scanf("%s",&x);
   	if(x[0]=='S'&&x[1]=='R'){
	int  e,f,i1;
	scanf("%d %d",&e,&f);
   	SR(c,a,b,e,f,i1);}
   	
	if(x[0]=='S'&&x[1]=='C'){
	int  e,f,i1;
	scanf("%d %d",&e,&f);
   	SC(r,a,b,e,f,i1);}
   	
   	if(x[0]=='I'&&x[1]=='R'){
	int  T,i2,i1;
	scanf("%d",&T);
   	IR(c,r,a,b,T,i2,i1);
	   r=r+1;}
   		
   	if(x[0]=='I'&&x[1]=='C'){
	int  T,i2,i1;
	scanf("%d",&T);
   	IC(r,c,a,b,T,i2,i1);
	   c=c+1;}
   	
   	if(x[0]=='D'&&x[1]=='C'){
	int  m,i1;
	scanf("%d",&m);
   	DC(r,c,a,b,m,i1);
	   c=c-1;}
   	
   	if(x[0]=='D'&&x[1]=='R'){
	int  m,i1;
	scanf("%d",&m);
   	DR(c,r,a,b,m,i1);
	   r=r-1;}
   	
   	
   }
   	 for(i=0;i<r;i++){
   	for(j=0;j<c;j++){
   	   printf("%d ",a[i][j]);
	   }
	   printf("\n");
   }
}
   
   void SR(int c,int a[100][100],int b[100],int e,int f,int i1){	
   	for(i1=0;i1<c;i1++){
       b[i1]=a[e-1][i1];
       a[e-1][i1]=a[f-1][i1];
       a[f-1][i1]=b[i1];} 
   } 
   void SC(int r,int a[100][100],int b[100],int e,int f,int i1){	
   	for(i1=0;i1<r;i1++){
       b[i1]=a[i1][e-1];
       a[i1][e-1]=a[i1][f-1];
       a[i1][f-1]=b[i1];} 
   } 
   void IC(int r,int c,int a[100][100],int b[100],int T,int i2,int i1){	
   	for(i2=0;i2<(c-T+1);i2++){
   	for(i1=0;i1<r;i1++){
       a[i1][c-i2]=a[i1][c-i2-1];
       } }
       for(i1=0;i1<r;i1++){
	   a[i1][T-1]=0;}
   } 
  
   void IR(int c,int r,int a[100][100],int b[100],int T,int i2,int i1){	
   	for(i2=0;i2<(r-T+1);i2++){
   	for(i1=0;i1<c;i1++){
       a[r-i2][i1]=a[r-i2-1][i1];
	   } 
	   }
	   for(i1=0;i1<r;i1++){
	   a[T-1][i1]=0;
	   }
	   
   }  
   void DC(int r,int c,int a[100][100],int b[100],int m,int i1){	
   	for(;(m-1)<r;m++){
   	for(i1=0;i1<r;i1++){
       a[i1][m-1]=a[i1][m];
	   }
	    } 
   }
   void DR(int c,int r,int a[100][100],int b[100],int m,int i1){
   for(;(m-1)<c;m++){
   	for(i1=0;i1<c;i1++){
       a[m-1][i1]=a[m][i1];
	   } }	  
   }  
