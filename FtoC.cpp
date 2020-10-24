#include <stdio.h>
#include <stdlib.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main()
{
	float fah,cel;
	printf("请输入华氏度：");
	scanf("%f",&fah);
	
	cel = (fah - FREEZING_PT) * SCALE_FACTOR;
	
	printf("转换为摄氏度：%.1f\n",cel);
	system("pause");
	return 0;
}
