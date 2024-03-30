#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[20];
    int length = 0;

    printf("문자열을 입력하세요 :  ");
    scanf("%s", str);
    printf("입력된 문자열은 " % s" 입니다.\n", str);

    while (str[length] != 0) {
        length++;
    }

    printf("입력된 문자열의 길이 = %d", length);

    return 0;
}