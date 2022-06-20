//Carlos Moya y Manuel Rodriguez.
//Ejercicio 35

#include <stdio.h>
int main(){
	int num, par, impar, n, multiplo = 0, x, result1, result2, result3;
	do
	{
		printf("Ingrese un numero positivo ");
		scanf("%i", &num);
		if(num < -1)
		{
			printf("Error solo numeros positivos \n");
		}
		else{
			n = num;
			result1 = n%2 == 0; 
			par = par + result1;
			result2 = n%2 == 1;
			impar = impar + result2;
			result3 = n%3 == 0;
			multiplo = multiplo + result3;
		}
	}while(num != -1);
	printf("\n Cantidad de numeros pares: %i", par);
	printf("\n Cantidad de numeros impares: %i", impar);
	printf("\n Cantidad de multiplos de 3: %i", multiplo);
	return 0;
}