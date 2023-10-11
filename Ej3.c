/*
	Hacer un programa que pida tres números A, B, C, y después haga el cálculo
	siguiente:
*/
# include<stdio.h>
	//Variables globales
	float a;
	float b;
	float c;
	float f;
main()
{	
	printf("Calcularemos (D =(A+B)/C) \n");
	printf("introduce A: ");
	scanf("%f",&a);
	printf("introduce B: ");
	scanf("%f",&b);
	printf("introduce C: ");
	scanf("%f",&c);
	f=((a+b)/c);
	printf("El resultado es: %f",f);
}
