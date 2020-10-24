#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,x1,x2,x3,x4,y1,y2,y3,y4,z1,z2;
	printf("请以任意顺序输入1到16（中间以空格连接）：");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
    
    printf("\n\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    
    x1=a+b+c+d;
    x2=e+f+g+h;
	x3=i+j+k+l;
	x4=m+n+o+p;
	y1=a+e+i+m;
	y2=b+f+j+n;
	y3=c+g+k+o;
	y4=d+h+l+p;
	z1=a+f+k+p;
	z2=d+g+j+m; 
	printf("横行的和依次为：%d %d %d %d\n",x1,x2,x3,x4);
	printf("竖行的和依次为：%d %d %d %d\n",y1,y2,y2,y4);
	printf("对角线的和为（从左上到右下 从右上到左下）：%d %d\n\n\n",z1,z2);
	
	if (x1==34,x2==34,x3==34,x4==34,y1==34,y2==34,y3==34,y4==34,z1==34,z2==34) 
    printf("恭喜你组成了\"幻方\"\n\n");
	system("pause");
	return 0;	
 } 
