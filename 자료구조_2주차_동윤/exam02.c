#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[100];
	int length = 0;
	int i = 0;

	printf("문자열을 입력하세요: ");
	scanf("%s", str);
	printf("입력된 문자열은\n%s\n입니다", str);

	while (str[i] != '\0') {
		length++;
		i++;
	}
	printf("입력된 문자열의 길이 = %d", length);

}