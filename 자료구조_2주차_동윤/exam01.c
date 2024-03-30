#include <stdio.h>

int main() {
	char string[4][20] = { "Korea", "Seoul", "Mapo", "152번지 2 / 3" };
	for (int i = 0; i < 4; i++) {
		printf(string[i]);
		printf("\n");
	}

	printf("\n");

	int next = 0;
	char* ptr[4] = { "Korea", "Seoul", "Jongno", "152번지 2 / 3" };
	for (int j = 0; j < 4; j++, next++) {
		printf(* (ptr + next));
		printf("\n");
	}
}