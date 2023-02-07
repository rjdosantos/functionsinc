// O custo de um carro novo ao consumidor final é o preço de fábrica 
// somado ao percentual de lucro do distribuidor, acrescido dos impostos 
// aplicados ao preço de fábrica.

// Faça um programa que receba o preço de fábrica de um veículo, 
// o percentual de lucro do distribuidor e o percentual de impostos. 
// Em cada item, crie uma função distinta para calcular e retornar:


// a) o valor correspondente ao lucro do distribuidor;
// b) o valor correspondente aos impostos;
// c) o preço final do veículo.

// Após criar cada uma das funções, desenvolva um algoritmo 
// que declare e invoque cada uma das funções, mostrando o lucro 
// do distribuidor, os impostos e o valor final do veículo.


#include <stdio.h>
	
	// faz o calculo do distribuidor
	float lucro_distribuidor(float carro_fabrica, float lucro_percentual) {
		return carro_fabrica * lucro_percentual / 100;
	}
	
	// Essa função faz o calculo do imposto do gorverno
	float valor_imposto(float imposto, float carro_fabrica) {
		return carro_fabrica = (carro_fabrica * imposto / 100);	
	}
	
	// faz o calculo do valor do carro + o valor do imposto sobre o carro + o lucro sobre o carro
	float preco_veiculo_final(float carro_fabrica, float imposto, float lucro_percentual) {	
		return carro_fabrica + imposto + lucro_percentual;
	}
	
	void main() {
		float precof, imp, imposto_percentagem, valor_tot, l_distribuidor,
		imposto_gov, preco_final;
		
		printf("Insira o preco de fabrica: \n");
		scanf("%f", &precof);
		
		printf("Insira a porcentagem de lucro do distribuidor: \n");
		scanf("%f", &imp);
		
		printf("Insira a porcentagem de impostos: \n");
		scanf("%f", &imposto_percentagem);
				
		l_distribuidor = lucro_distribuidor(precof, imp);
		imposto_gov = valor_imposto(precof, imposto_percentagem);
		preco_final = preco_veiculo_final(precof, l_distribuidor, imposto_gov);
		
		printf("Lucro do distribuidor: %.0f \n", l_distribuidor);
		printf("Impostos: %.0f \n", imposto_gov);
		printf("Valor total do carro: %.f", preco_final);
	}









