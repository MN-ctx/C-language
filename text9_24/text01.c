//ָ�����
//����������Ĵ���

(*(void (*)())0)();
//����ָ������ - void(*)()
//��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
//����0��ַ���ĸú���

void(*signal(int, void(*)(int)))(int);
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ���������int������������void
//�ú���������д��������ʽ��
//typedef void(*abc)(int);
//abc signal(int,abc);