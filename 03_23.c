#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������Ϸ��
int meau()
{
	int choice = 0;
	printf("******************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�뿪��Ϸ\n");
	printf("******************\n");
	printf("���������ѡ��>");
	scanf("%d", &choice);
	return choice;
}
void game()
{
	int ran_num = rand() % 100 + 1;
	while (1)
	{
		int gus_num = 0;
		printf("������µ�����\n");
		scanf("%d", &gus_num);
		if (gus_num > ran_num)
		{
			printf("�¶���\n");
		}
		else if (gus_num < ran_num)
		{
			printf("������\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
			break;
		}
	}
}
int main()
{
	while (1)
	{
		srand((unsigned int)time(0));
		int a = 0;
		a = meau();
		if (a== 1)
		{
			game();
		}
		else if (a == 2)
		{
			printf("goodbye\n");
			break;
		}
		else
		{
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}
