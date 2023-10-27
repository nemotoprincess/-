#include<stdio.h>

int main(void)
{

	int ans;

    printf("明日1限なのによふかしをしてしまいました。あなたならどうしますか?\n1.急いで寝ていく。\n2.あきらめてさぼる。\n3.徹夜で行く");
	scanf_s("%d", &ans);


	if (ans == 1)
	{
		printf("無理です。あきらめましょう。");
	}
	else
	{
		if (ans == 2)
		{
			printf("いい選択です。体は大事。");
		}

		else
		{
			if (ans == 3)
			{
				printf("ナイスです。");
			}
		}

	}


	return 0;
}