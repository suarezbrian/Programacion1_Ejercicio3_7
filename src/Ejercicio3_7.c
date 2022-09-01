/*
 ============================================================================
 Name        : Ejercicio3_7.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio3_6 (Funciones)
 Description :

Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int operacion(int pNumero, int sNumero, char letra);
char validarLetra();
int ingresarNumero();
int validarNumero(int numero);
int resta(int pNumero, int sNumero);
int suma(int pNumero, int sNumero);


int main()
{
	setbuf(stdout, NULL);

	int pNumero;
	int sNumero;
	int resultado;
	char letra;

	pNumero = ingresarNumero();
	sNumero = ingresarNumero();

	letra = validarLetra();
	resultado = operacion(pNumero, sNumero, letra);

	letra == 's' ? printf("\nOPERACION SUMA"):printf("\nOPERACION RESTA");

	printf("\nPrimer numero: %d, segundo numero: %d - Resultado : %d", pNumero, sNumero, resultado);

	return 0;
}

int operacion(int pNumero, int sNumero, char letra)
{
	int resultado;

	switch(letra)
	{
	case 's':
		resultado = suma(pNumero, sNumero);
		break;
	case 'r':
		resultado = resta(pNumero, sNumero);
		break;
	}

	return resultado;
}

char validarLetra()
{
	char letra;
	fflush(stdin);
	printf("Ingrese que operacion desea realizar : 's' = Sumar / 'r' = Restar : ");
	scanf("%c", &letra);

	switch(letra)
	{
	case 's':
		return letra;
	case 'r':
		return letra;
	default:
		validarLetra(letra);
		break;
	}

	return 0;
}

int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero (10-100) : ");
	scanf("%d", &numero);

	numero = validarNumero(numero);

	return numero;
}


int validarNumero(int numero)
{
	while(numero < 10 || numero > 100)
	{
		printf("Error - Ingrese un numero valido (10-100) : ");
		scanf("%d", &numero);
	}

	return numero;
}


int suma(int pNumero, int sNumero)
{
	int suma;

	suma = pNumero + sNumero;

	return suma;
}

int resta(int pNumero, int sNumero)
{
	int resta;

	resta = pNumero - sNumero;

	return resta;
}


