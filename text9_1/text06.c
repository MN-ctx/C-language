//��������Ϸ

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i = 0;
int input = 0;
int cai = 0;//���ղµ�����

void abc()
{
	printf("************************************\n");
	printf("*****     1.��      2.����     *****\n");
	printf("************************************\n");
}

//RAND_MAX-32767

void game()
{
	//1.����һ�������
	int ret = 0;
	//ʱ���
	ret = rand()%100+1;	//���������,%100+1��������ʹ���������100����
	//printf("%d\n", ret);

	while (1)
	{
		printf("������֣�");
		scanf("%d", &cai);
		if (cai > ret)
			printf("�´���\n");
		else if (cai < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//srand������game�ж��Ƿ����������е�ԭ�����������ɺ����ֱ�ӿ����ã���game�еĻ�ÿ����һ�ζ�Ҫ��ȥ�����������ɣ��ᵼ��ʱ������ɵ���ֵ���ý�
	do
	{
		abc();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}