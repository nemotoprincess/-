#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int intelligence, stamina, charisma, total;
    srand(time(NULL)); // 乱数生成器の初期化

    // ランダムな値を割り当て
    intelligence = rand() % 21;
    stamina = rand() % (20 - intelligence);
    charisma = 20 - intelligence - stamina;

    printf("Intelligence: %d\n", intelligence);
    printf("Stamina: %d\n", stamina);
    printf("Charisma: %d\n", charisma);

    // クラスを決定
    if (intelligence >= stamina && intelligence >= charisma) {
        printf("Class: Mage\n");
    }
    else if (stamina > intelligence && stamina >= charisma) {
        printf("Class: Knight\n");
    }
    else {
        printf("Class: Thief\n");
    }

    return 0;
}