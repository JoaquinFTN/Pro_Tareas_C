/*
	Hacer un programa que pida dos números enteros por el teclado y los sume.
*/
# include<stdio.h>
	//Variables globales
	float a;
	float b;
	float s;
main()
{
	printf("Suma de numeros\n");
	printf("introduce el primer numero: ");
	scanf("%f",&a);
	printf("introduce el segundo numero: ");
	scanf("%f",&b);
	s=a+b;
	printf("La suma es: %f",s);
}

