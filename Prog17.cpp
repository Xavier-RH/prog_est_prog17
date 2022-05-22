/* Autor: Xavier Romero Hernández, Realizado: 17/02/2022 
	Programa que lea un conjunto de numeros enteros y despues halle e imprima la suma de los enteros pares e impares
	*/
	
#include <stdio.h>

int main(){
	int par,impar, a;
	
	do{
		printf("Introduce un numero entero: ");
		scanf("%d",&a);
		if((a%2)==0){
			par=par+a;
		}
		if((a%2)==1){
			impar=impar+a;
		}
	}while(a!=0);
	
	printf("La suma de los numeros pares es de: %d\n",par);
	printf("La suma de los numeros impares es de: %d",impar-1);
	
	return 0;
}
