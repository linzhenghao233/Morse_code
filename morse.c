#include <stdio.h>
#include <ctype.h>

int main(void) {
	char morse[26][5] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	int ch;

	printf("�������������ƴ����");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n')
			continue;
		printf("%s ", morse[toupper(ch) - 65]);
	}

	return 0;
}