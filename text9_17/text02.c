//�޷��� - �����

#include <stdio.h>
#include <Windows.h>

int main()
{
	unsigned int i;//�з��ŵ�char�ķ�Χ��-127 -> 128   �޷��ŵ�char�ķ�Χ��0 -> 255
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);//%u��ӡʮ���Ƶ��޷�������
		Sleep(100);//��ӡ��ʱ��ͣ��100����
	}
	return 0;
}

