#include <stdio.h>

/*
Brutus e Olívia foram ao médico, que lhes disse que ambos estavam fora do peso ideal. 
Ambos discordaram veementemente da afirmação do médico. 
Para provar que estava certo, o médico mostrou o Índice de Massa Corporal (IMC) de cada um, 
que é calculado da seguinte forma:
IMC=peso/altura×altura
Brutus tem 1,84 metros de altura e pesa 122 kg, enquanto Olívia tem 1,76 metros de altura e pesa 
45 kg. 

A tabela abaixo apresenta a classificação do IMC:
Faixa de IMC    	Classificação
< 16 				Magreza grave
16 a < 17 			Magreza moderada
17 a < 18,5 		Magreza leve
18,5 a < 25 		Saudável
25 a < 30 			Sobrepeso
30 a < 35 			Obesidade grau I
35 a < 40 			Obesidade grau II (severa)
≥ 40 				Obesidade grau III (mórbida)

Depois de serem confrontados com seus IMCs, Brutus e Olívia chegaram à conclusão de que precisam 
mudar seus pesos. No entanto, eles gostariam de perder e ganhar a menor quantidade de quilos 
possível. O médico, infelizmente, não foi capaz de dizer quantos quilos eles precisam perder ou 
ganhar.

Implemente um programa para determinar a quantidade mínima de peso que eles devem perder ou ganhar 
para atingirem um peso saudável, de acordo com a classificação do IMC. O seu programa deve imprimir 
essas quantidades usando apenas uma casa decimal. Imprima primeiro a quantidade do Brutus e depois 
a da Olívia.

*/

float calculaPeso(float, float);

int main(void){

	// metros
	float altura_brutus = 1.84;
	float altura_olivia = 1.76;

	// kg
	float peso_brutus = 122.0;
	float peso_olivia = 45.0;

	// Calcular quanto Brutus precisa ganhar/perder
	peso_brutus = calculaPeso(peso_brutus, altura_brutus);
	printf("O peso de Brutus deve ser atualizado em %.1fkg\n", peso_brutus);

	// Calcular quanto Olivia precisa ganhar/perder
	peso_olivia = calculaPeso(peso_olivia, altura_olivia);
	printf("O peso de Olivia deve ser atualizado em %.1fkg\n", peso_olivia);

	return 0;
}

float calculaPeso(float peso, float altura){
	float imc = peso/(altura*altura);
	float peso_ideal;

	// Precisa perder peso
	if (imc > 25){
		peso_ideal = 24.9 * (altura*altura);
	}

	// Precisa ganhar peso
	else if (imc < 18.5){
		peso_ideal = 18.5 * (altura*altura);
	}

	/*
	Se (peso_ideal - peso) for:
	> 0: Ganhar peso
	< 0: Perder peso
	*/

	return peso_ideal - peso;
}
