int tipoChar(char simbolo){
	if ((simbolo >= 48)&&(simbolo <= 57)){
		return 0;
	}
	else if((simbolo >= 65)&&(simbolo <= 90)){
		return 1;
	}
	else if((simbolo >= 97)&&(simbolo <= 122)){
		return 2;
	}
	else{
		return -1;
	}
}

int contemApenasNumero(char c1, char c2, char c3){
	/*
	Se exatamente um caractere e numero, retorna 1
	Senao, retorna 0
	*/
	int tipoc1, tipoc2, tipoc3;
	tipoc1 = tipoChar(c1);
	tipoc2 = tipoChar(c2);
	tipoc3 = tipoChar(c3);
	
	// Se todos sao numeros...
	if ((tipoc1 == 0)&&(tipoc2 == 0)&&(tipoc3 == 0)){
		return 0;
	}

	else{
		if ((tipoc1 == 0)^(tipoc2 == 0)^(tipoc3 == 0)){
			return 1;
		}
		else{
			return 0;
		} 
	}

}

void colocaMaiuscula(char *simbolo){
	// A diferenca entre valores inteiros de 'a' a 'A' e exatamente 32
	if (tipoChar(*simbolo) == 2){
		*simbolo &= 0xDF; // soma 32
	}
}

int verifica(char c1, char c2, char c3){
	int tipoc1, tipoc2, tipoc3;
	tipoc1 = tipoChar(c1);
	tipoc2 = tipoChar(c2);
	tipoc3 = tipoChar(c3);

	if((tipoc1 >= 0)&&(tipoc2 >= 0)&&(tipoc3 >= 0)){
		return 1;
	}
	else{
		return 0;
	}
}
