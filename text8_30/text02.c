//��1-100��3�ı���

#include <stdio.h>

main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i%3 == 0)
			printf("%d ", i);
			continue;
	}
	return 0;
}