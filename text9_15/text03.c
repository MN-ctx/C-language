//������ - ���ַ���(arr1)��������һ���ַ���(arr2)����ȥ������\0��

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src) //const�������ƣ�ʹ�䲻�ܸı䣬���ǲ�������char* dest����Ϊ���ǽ��շ�����Ҫ�ı��
{
	char* ret = dest;//��ʱdest��ֵ����������*dest�ĸı���ı䣬��ret��ı�
	assert(dest != NULL);//����
	assert(src != NULL);//����
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//ʵ�ֽ�arr2������arr1����
	char arr1[] = "#############";
	char arr2[] = "����Ц";
	printf("%s\n", my_strcpy(arr1, arr2)); //���䣺strcpy(���յ�����,Դͷ����) - �ú������ڿ����ַ���
	return 0;
}