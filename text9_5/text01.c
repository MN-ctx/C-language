//����-û����һ�κ�����num������1

#include<stdio.h>

void aaa(int* num)
{
	(*num)++;//++�����ȼ��Ƚϸߣ�ֻ������num����������*num������Ҫ�ѣ�*num��������
}

int main()
{
	int num = 0;
	aaa(&num);
	printf("num=%d\n", num);
	aaa(&num);
	printf("num=%d\n", num);
	aaa(&num);
	printf("num=%d\n", num);
	return 0;
}