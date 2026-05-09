#include <stdio.h>

int main(){
	
	int i = 0;
	char str[5];

	printf("Insira string: ");
	for (i = 0;i < 5;i++){
		scanf("%c", &str[i]);
		if (str[i] == '.'){
			break;
		}
	
	}
	str[i] = '\0';
	printf("\"%s\"\n", str);

	return 0;
}
