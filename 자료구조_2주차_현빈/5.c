#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void hanoi(char from, char temp, char to, int n);

void main(void)
{
    hanoi('A', 'B', 'C', 3);
}
void hanoi(char from, char temp, char to, int n)
{
    if (n == 1) {

        printf("% c에서 원반 % d를(을) % c로 옮김 \n", from, 1, to);
    }
    else {
        hanoi(from,
            to, temp, n - 1);

        printf("% c에서 원반 % d를(을) % c로 옮김\n", from, n, to);
        hanoi(temp, from, to, n - 1);
    }
}