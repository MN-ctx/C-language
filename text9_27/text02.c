//ð������ - ָ���ÿ⺯��qsort����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2) //int�������ڸ�ʽ�̶���
{
	return *(int*)e1 - *(int*)e2;
}

//������������
void test1()
{
	int arr1[] = { 1,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);//qsort�����Ĺ̶���ʽ

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
}


int cmp_float(const void* e1, const void* e2)
{
	//����һ��
	/*if (*(float*)e1 > *(float*)e2)
		return 1;
	else if (*(float*)e1 == *(float*)e2)
		return 0;
	else
		return -1;*/

	//return *(float*)e1 - *(float*)e2; //����������һ����λ�ķ�����ֻ�Ƿ��ص�ʱ����Ϊ�Ƿ���int�������Կ��ܱ���
	return ((int)(*(float*)e1 - *(float*)e2));//�������ĸĽ�(��ע��float��*��Ҫ������floatǰ���*���Բ�Ҫ)
}

//���򸡵�������
void test2()
{
	float arr2[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
	int j = 0;
	for ( j = 0; j < sz; j++)
	{
		printf("%f ", arr2[j]);
	}
}

struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//�����䣨age������
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�������Ƚ�
	return strcmp (((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//�����֣�name������
}

//����ṹ��
void test3()
{
	struct Stu arr3[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(arr3) / sizeof(arr3[0]);
	//qsort(arr3, sz, sizeof(arr3[0]), cmp_stu_by_age);//�����䣨age������
	qsort(arr3, sz, sizeof(arr3[0]), cmp_stu_by_name);//�����֣�name������
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}