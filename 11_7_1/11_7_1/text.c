#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include<Windows.h>
#include<stdlib.h>


//演示多个字符从两端移动，向中间汇聚

int main()
{
	char arr1[] = "I   love   myself";
	char arr2[] = "#################";
	int left = 0;
	int right = strlen(arr1) - 1;
	for (left = 0, right = strlen(arr1) - 1;
		left <= right;
		left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
	};
	return 0;
}