//�����ĺ���

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "����Ц��˧";
	char arr2[20] = "#########";
	strcpy(arr2, arr1);// arr2��Ŀ�ĵأ�arr1��Դͷ
	printf("%s\n", arr2);// \0Ҳ������ȥ�ˣ���˻������ӡ�������ӡ����Ķ���
	return 0;
}