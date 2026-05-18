int avancarCarros(int posicoes[], int numCarros) {
	for (int i = 0; i < numCarros; i++){

		// Se algum carro cruzou a linha de chegada...
		for (int j = 0; j < numCarros; j++){
			if (posicoes[j] >= 30){
				return 0;
			}
		}

		int aleatorio = (rand() % 3) + 1; // Limita numero aleatorio entre 1 e 3
		posicoes[i] += aleatorio;
	}
	return 1;
}

void mostrarPista(int posicoes[], int numCarros) {
	for (int i = 0; i < numCarros; i++){
		for (int j = 0; j < TAM_PISTA; j++){
			if (j == posicoes[i]){ 
				printf("%c", 65+i); // Imprime de A em diante
			}
			else {
				printf("_");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void calcularPodio(int posicoes[], int numCarros, int podio[3]){
	int i, j;

	for (int i = 0; i < numCarros; i++){
		int primeiro = 0;

		for (int j = 0; j < numCarros; j++){
			if (posicoes[i] > posicoes[j]){
				primeiro = i;
			}

		}
		podio[i] = primeiro;
		posicoes[i] = -1;
	}

}

void corrida(int numCarros, int podio[3]) {
	int i, posicoes[MAX_CARROS];

	// Inicializa posicoes com 0
	for (i = 0; i < numCarros; i++){
		posicoes[i] = 0;
	}

	// Simula proxima iteracao da corrida
	while(avancarCarros(posicoes, i)){
		limpaTela();
		mostrarPista(posicoes, i);
		usleep(500000); // Delay de 0.5

	}
	calcularPodio(posicoes, i);
	printf("Pódio: 1o = %c, 2o = %c, 3o = %c\n", podio[0], podio[1], podio[2]);

}
