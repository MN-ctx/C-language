//����goto���ʵ�ֵ��Թػ�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system()ִ��ϵͳ����ģ�cmd��   //shutdown -s -t 60 ���Խ���60���ػ�
aaa://����goto�����ת�ı�ʶ��aaa
	printf("��ע�⣬��ĵ��Խ���60���ػ������롰����Ц�Ǵ�˧�硱��ȡ���ػ��������룺\n");
	scanf("%s", input);
	if (strcmp(input,"����Ц�Ǵ�˧��") == 0)
	{
		system("shutdown -a");//shutdown -a ȡ���ػ�
	}
	else
	{
		goto aaa;//goto�����ת�ر�ʶ��aaa
	}
	return 0;
}