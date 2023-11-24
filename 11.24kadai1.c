#include <stdio.h>
#include <ctype.h>
 
#define CH_LOWER    1
#define CH_UPPER    2
#define CH_NUMBER   4
#define CH_OTHER    8
#define CH_WORD     (CH_LOWER | CH_UPPER | CH_NUMBER)
 
void main(void)
{
    char password[50], *p;
    int flg, len;
 
    printf("パスワードを入力してください->");
    scanf("%s", password);
    flg = 0;
    for (p = password; *p != '¥0'; p++) {
        char ch = *p;
        if (islower(ch)) flg |= CH_LOWER;
        else if (isupper(ch)) flg |= CH_UPPER;
        else if (isdigit(ch)) flg |= CH_NUMBER;
        else flg |= CH_OTHER;
    }
    len = p - password;
    if ((flg == CH_WORD) && (len >= 8 && len <= 16))
        printf("OK¥n");
    else
        printf("BAT¥n");
}