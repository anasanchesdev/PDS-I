#include <stdio.h>

float fahrenheit(float);

int main(){
	float f, c;
	printf("Digite a temperatura em Cº:\n > ");
	scanf("%f", &c);
	f = fahrenheit(c);
	printf("Essa temperatura e %.2fºF\n", f);
	return 0;
}

float fahrenheit (float c){
	return (9*c + 160)/5;
}
