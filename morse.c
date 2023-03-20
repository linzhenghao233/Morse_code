#include <stdio.h>
#include <ctype.h>

int main(void) {
	char morse[26][5] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	int ch;

	printf("ÇëÊäÈëÄãµÄÃû×ÖÆ´Òô£º");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n')
			continue;
		printf("%s ", morse[toupper(ch) - 65]);
	}

	return 0;
}