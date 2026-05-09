#include <stdio.h>

int main(){
	char str[] = "Linguagem C";
	printf("%s\n", str);

	printf("%c\n%c\n%c\n%c\n\n", str[0], *str, *str + 1, *(str+1));

	printf("*(str+1): %c\nstr+1: %c\n*(str+2): %c\nstr+2: %c\n", *(str+1), str+1, *(str+2), str+2);

	for (int i = 0; str[i] != '\0'; i++){
		printf("\nEndereco de str[%d] (%c): %p ou %p\n", i, str[i], &str[i], str + i);
	}

	return 0;
}
