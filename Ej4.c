/*
	Hacer un programa que calcule el cuadrado de un número. Las variables han de
	ser del tipo entero largo.
*/
# include<stdio.h>
	//Variables globales
	int n;
	int c;
main()
{
	printf("Cuadrado de un numero\n");
	printf("introduce el numero: ");
	scanf("%d",&n);
	c=n*n;
	printf("Resultado: %d",c);
}
