#include <stdio.h>
#include <stdlib.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main()
{
	float fah,cel;
	printf("�����뻪�϶ȣ�");
	scanf("%f",&fah);
	
	cel = (fah - FREEZING_PT) * SCALE_FACTOR;
	
	printf("ת��Ϊ���϶ȣ�%.1f\n",cel);
	system("pause");
	return 0;
}
