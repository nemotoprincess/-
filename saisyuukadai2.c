#include<stdio.h>
#include<time.h>
#include<Windows.h>

int main()
{
	int n1;           //コンピュータが選んだ数字//
	int n2;           //入力数字//
	int i;
	char c[128];

	system("cls");        //画面消去//

	srand(time(NULL));             //乱数の準備//
	n1 = rand() % 100 + 1;          //1～100範囲からの乱数発生//

	printf("今コンピュータが数字を1つ選びました。\n");
		printf("選んだ数字を当ててください。\n");
		printf("数字の範囲は1から１００です。\n");

		for (i = 1; i <= 300; i++)
		{
			printf("\n数字");         //数字表示//
			fflush(stdout);
			gets(c); n2 = atoi(c);
			if (n1 == n2)break;
			if (n1 < n2)
				printf("大きすぎます");
			else
				printf("小さすぎます");
		}
		printf("\n\n%d回目で当たり\n", i);
}