#include <stdio.h>
#include <ctype.h>

int HasUpper(const char* _String) {
	do { if (isupper(*_String)) return 1; } while (*_String++ >= ' ');
	return 0;
}

int main() {
	char Input[256];
	char* Read = Input;

	printf("文字を入力してください。\n");
	fgets(Input, 256, stdin);

	if (HasUpper(Input)) printf("大文字が含まれています。\n");
	else printf("大文字は含まれていません。\n");
	fgets(Input, 256, stdin);
	return 0;
}