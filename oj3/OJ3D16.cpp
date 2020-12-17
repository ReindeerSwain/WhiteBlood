//每个输入包含一个测试用例，第一个整数m(1<=m<=20)，表示随后有m组数据，每组数据由一个数字n（-15<=n<=15）和一个字符组成，
//每组数据之间用空格分隔。数字代表柱状图的高度，字母代表该柱使用的画图符号。如果数字后没有字母，默认该柱的画图符号使用加号’+’ 
#include <stdio.h>

int main(void){
	int num[20];                     //数字 
	char sign[20],tab[20][40];       //字符，显示 
	int n,j,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		scanf("%c",&sign[i]);
	}
	int y1=0,y0=0;
	for(i=0;i<n;i++){
		if(num[i]>0&&num[i]>y1)
		 y1=num[i];
		else if(num[i]<=0&&num[i]<y0)
		 y0=num[i]; 
	}
	int len=y1-y0+1;
    for(j=0;j<n;j++){
    	if(sign[j]==' '||sign[j]=='\n'){
    		if(num[j]>0){
    			for(i=0;i<len;i++){
    				if(i<(y1-num[j]))
    				tab[i][j]=' ';
    				else if(i>=(y1-num[j])&&i<y1)
    				tab[i][j]='+';
    				else if(i==y1)
    				tab[i][j]='-';
				    else if(i>y1) tab[i][j]=' ';}
		}
			else if(num[j]==0) tab[y1][j]='-';
			else if(num[j]<0){
				for(i=0;i<len;i++){
					if(i<y1) tab[i][j]=' ';
					else if(i==y1) tab[i][j]='-';
					else if(i>y1&&i<=(y1-num[j]))
					tab[i][j]='+';
					else tab[i][j]=' ';
				}
			}
		
	}
        else {
        	if(num[j]>0){
    			for(i=0;i<len;i++){
    				if(i<y1-num[j])
    				tab[i][j]=' ';
    				else if(i>=(y1-num[j])&&i<y1)
    				tab[i][j]=sign[j];
    				else if(i==y1)
    				tab[i][j]='-';
				    else tab[i][j]=' ';
			}}
			else if(num[j]==0) tab[y1][j]='-';
			else{
				for(i=0;i<len;i++){
					if(i<y1) tab[i][j]=' ';
					else if(i==y1) tab[i][j]='-';
					else if(i>y1&&i<=(y1-num[j]))
					tab[i][j]=sign[j];
					else tab[i][j]=' ';
				}
			}
		
		}
    }
    for(j=0;j<len;j++){
    	if(j==y1) {
    		 for(i=0;i<n;i++){
			 if(i==n-1)
                {
                    printf("%c",tab[j][i]);
                }
                else
                {
                    printf("%c-",tab[j][i]);
                }}
		 }
    	
    	else for(i=0;i<n;i++){
		    
    	    printf("%c ",tab[j][i]);
		}
    	printf("\n");
	}
	return 0;
}
