//ð������ - ָ�����Լ�����ĺ�������ģ�¿⺯��qsort��

#include <stdio.h>

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
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//�����֣�name������
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//int���*��Ҫ��intǰ��*����Ҫ
}

void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char nam = 0;
		nam = *buf1;
		*buf1 = *buf2;
		*buf2 = nam;
		buf1++;
		buf2++;
	}
}

int bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for ( i = 0; i < sz-1; i++)
	{
		int j = 0;
		for ( j = 0; j < sz-1-i; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + width*j , (char*)base + (j + 1)*width) > 0)
			{
				//����
				Swap((char*)base + width*j, (char*)base + (j + 1)*width, width);
			}
		}
	}
}



void test5()
{
	struct Stu arr5[3] = { {"zhangsan",30},{"lisi",10},{"wangwu",20} };
	int sz = sizeof(arr5) / sizeof(arr5[0]);
	//bubble_sort(arr5, sz, sizeof(arr5[0]), cmp_stu_by_age);
	bubble_sort(arr5, sz, sizeof(arr5[0]), cmp_stu_by_name);
}

void test4()
{
	int arr4[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr4) / sizeof(arr4[0]);
	bubble_sort(arr4, sz, sizeof(arr4[0]), cmp_int);
}

int main()
{
	//test4();
	test5();
	return 0;
}