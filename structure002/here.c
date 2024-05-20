#include <stdio.h>
#include <string.h>
#define maxn 30
char * gets (char * st,int n);
struct people 
{
	char Fname[maxn];
	char lastname[maxn];
	int age;
	char sex[maxn];

};
int main()
{
	int i = 0;
	struct people arr[10];
	printf("输入人的姓氏:\n");
	while (gets(arr[i].lastname, maxn) != NULL && arr[i].lastname[0] != '\0'&&i<10)
	{
		printf("请输入名:\n");
		gets(arr[i].Fname, maxn);
		printf("请输入性别：\n");
		gets(arr[i].sex, maxn);
		printf("请输入年龄:\n");
		scanf("%d", &arr[i++].age);
		while (getchar() != '\n')
			continue;
		if (i < 10)
			printf("(空白输入结束进程)请输入下一个人的姓氏:\n");
		
	}
	if (i > 0)
	{
		printf("这是你打印所有人的信息:\n");
		for (int b = 0;b < i;b++)
		{
			printf("%s%s  性别:%s :%d岁\n", arr[b].lastname, arr[b].Fname, arr[b].sex, arr[b].age);
		}
		int max = 0;
		for (int t = 0;t < i;t++)
		{
			if (arr[max].age < arr[t].age)
				max = t;
		}
		
		printf("年龄最大的是：%s%s  性别:%s :%d岁\n", arr[max].lastname, arr[max].Fname, arr[max].sex, arr[max].age);
	}
	else
		printf("没人!\n");
	return 0;
	
}
char* gets(char* st, int n)
{
	char* ret;
	char* find;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}
