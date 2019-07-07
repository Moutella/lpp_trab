#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

// trabalho final parte 1...?  paraleelizar e IMPEDIR CONDIÇÃO DE CORRIDA DE 3 FORMAS DIFERENTES
int main(int argc, char* argv[]){
	double sum;
	double a[256], b[256];
	int n= 256,i;
	
	for(i =0; i<n; i++){
		a[i] = i*0.5;
		b[i] = i*2.0;
	}
	sum = 0;


	#pragma omp parallel for reduction(+:sum)
	for(i = 0; i<n;i++){
		sum = sum + a[i]*b[i];
	}

	//removendo para agilizar o teste (se formos rodar varias vezes)
	//printf("sum = %f\n",sum);

}