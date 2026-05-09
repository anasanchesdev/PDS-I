//#include "prova1.h"
#include <math.h>
#include <stdio.h>

float loglcdf(float, float, float);

float loglcdf(float x, float a, float b){
	if (x >= 0){
		return 1/(1+pow((x/a), b));

	}
	else {
		return 0.0;
	}
}

int main(){

	float res;

	res = loglcdf(1, 2, 3);
	printf("%f", res);
	return 0;
}


