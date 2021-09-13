//ÊµÏÖ×Ö·û´®µ¹Ðð

#include<stdio.h>

int you(char* str)
{
	int a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return a;
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = you(arr) - 1;
	printf("%d\n", right);
	while (left < right)
	{
		int max = arr[left];
		arr[left] = arr[right];
		arr[right] = max;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}