//���ͷ�ļ���Keil��ϵͳĿ¼�������, ���� <reg51.h>һ��
#include <s3c2440.h>

void Delay(void);

//������
int main()
{
	while(1)
	{	
		//�����ĸ�LED
		GPBDAT &= 0xFFFFFE1F;
		//��ʱ
		Delay();

		//���ĸ�LED
		GPBDAT |= 0x1E0;
		//��ʱ
		Delay();
	}
}

//��ʱ����, ������ʱ�೤? ��Ҳ��֪��, �������������ص��� ^_^
void Delay()
{
	int i, j;
	for (i = 1000; i > 0; i--)
		for(j = 150; j> 0; j--);
	return;
}
