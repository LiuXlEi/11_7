#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

int main()
{
	char psw[] = {0};
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("����������:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("����������\n");
	}
	if (i == 3)
		printf("����������Σ��˳�����\n");
	
		
}
