#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏；
int meau()
{
	int choice = 0;
	printf("******************\n");
	printf("1.开始游戏\n");
	printf("2.离开游戏\n");
	printf("******************\n");
	printf("请输入你的选择：>");
	scanf("%d", &choice);
	return choice;
}
void game()
{
	int ran_num = rand() % 100 + 1;
	while (1)
	{
		int gus_num = 0;
		printf("输入你猜的数字\n");
		scanf("%d", &gus_num);
		if (gus_num > ran_num)
		{
			printf("猜多了\n");
		}
		else if (gus_num < ran_num)
		{
			printf("猜少了\n");
		}
		else
		{
			printf("恭喜你,猜对啦\n");
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
			printf("您的输入有误\n");
		}
	}
	system("pause");
	return 0;
}
