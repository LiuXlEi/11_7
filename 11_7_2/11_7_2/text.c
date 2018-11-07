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
		printf("请输入密码:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("请重新输入\n");
	}
	if (i == 3)
		printf("密码错误三次，退出程序\n");
	
		
}
