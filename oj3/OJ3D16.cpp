//ÿ���������һ��������������һ������m(1<=m<=20)����ʾ�����m�����ݣ�ÿ��������һ������n��-15<=n<=15����һ���ַ���ɣ�
//ÿ������֮���ÿո�ָ������ִ�����״ͼ�ĸ߶ȣ���ĸ�������ʹ�õĻ�ͼ���š�������ֺ�û����ĸ��Ĭ�ϸ����Ļ�ͼ����ʹ�üӺš�+�� 
#include <stdio.h>

int main(void){
	int num[20];                     //���� 
	char sign[20],tab[20][40];       //�ַ�����ʾ 
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
