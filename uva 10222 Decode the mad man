#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
	char word[10000] = { 0 };
	char word_lower[10000] = { 0 };
	char keyboard[] = "234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";  //'/'要打兩次才可判讀
	char answer[] =   "`1234567890qwertyuiop[asdfghjklzxcvbnm,";

	gets_s(word);
	for (int i = 0; i < strlen(word); i++) {
		word_lower[i] = tolower(word[i]);
	}

	for (int i = 0; i < strlen(word); i++) {
		for (int j = 0; j < strlen(keyboard); j++) {
			if (word_lower[i] == keyboard[j]) {
				printf("%c", answer[j]);
				break;
			}
			if (word_lower[i] == ' ') {
				printf(" ");
				break;
			}
		}

	}
	printf("\n");
}

