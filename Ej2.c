/*
	Hacer un programa que pida el precio y la cantidad de un producto y calcule el
	total. Utilizar variables enteras.
*/
# include<stdio.h>
	//Variables globales
	float precio;
	float cantidad;
	float total;
main()
{
	printf("Calculo del precio total\n");
	printf("Introduce el precio: ");
	scanf("%f",&precio);
	printf("Introduce la cantidad: ");
	scanf("%f",&cantidad);
	total=precio*cantidad;
	printf("Tiene que pagar: %f",total);
}
