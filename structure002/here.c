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
	printf("�����˵�����:\n");
	while (gets(arr[i].lastname, maxn) != NULL && arr[i].lastname[0] != '\0'&&i<10)
	{
		printf("��������:\n");
		gets(arr[i].Fname, maxn);
		printf("�������Ա�\n");
		gets(arr[i].sex, maxn);
		printf("����������:\n");
		scanf("%d", &arr[i++].age);
		while (getchar() != '\n')
			continue;
		if (i < 10)
			printf("(�հ������������)��������һ���˵�����:\n");
		
	}
	if (i > 0)
	{
		printf("�������ӡ�����˵���Ϣ:\n");
		for (int b = 0;b < i;b++)
		{
			printf("%s%s  �Ա�:%s :%d��\n", arr[b].lastname, arr[b].Fname, arr[b].sex, arr[b].age);
		}
		int max = 0;
		for (int t = 0;t < i;t++)
		{
			if (arr[max].age < arr[t].age)
				max = t;
		}
		
		printf("���������ǣ�%s%s  �Ա�:%s :%d��\n", arr[max].lastname, arr[max].Fname, arr[max].sex, arr[max].age);
	}
	else
		printf("û��!\n");
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
