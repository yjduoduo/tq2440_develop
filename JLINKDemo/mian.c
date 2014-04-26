//这个头文件在Keil的系统目录里就有了, 就像 <reg51.h>一样
#include <s3c2440.h>

void Delay(void);

//主函数
int main()
{
	while(1)
	{	
		//点亮四个LED
		GPBDAT &= 0xFFFFFE1F;
		//延时
		Delay();

		//关四个LED
		GPBDAT |= 0x1E0;
		//延时
		Delay();
	}
}

//延时函数, 具体延时多长? 我也不知道, 这个不是这里的重点啦 ^_^
void Delay()
{
	int i, j;
	for (i = 1000; i > 0; i--)
		for(j = 150; j> 0; j--);
	return;
}
