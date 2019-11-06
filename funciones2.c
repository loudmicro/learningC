/* 
gcc -Wall -O2 -ofunciones2 funciones2.c
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14163
#define CAMBIO 1.11
#define G 0.0000000000667

/*Prototipos*/
int area_rectangulo(int base,int altura);
double area_circulo(double radio);
double longitud_circunferencia (double radio);
double area_triangulo (int base,int altura);
int zero (void);
double imc (double peso, double alturacm);
double opuesto (double opuesto);
double inverso (double inverso);
int absoluto (int absoluto);
double euro2dolar(double euro); /**1.11*/
double dolar2euro(double dolar);
double mypow(double base, int exponente);
/*fuerza atraccion entre 2 masas*/
double fatraccion (double masa1, double masa2, double distancia);
int suma_serie (int n1, int n2);

int main(void)
{

	int entero1, entero2, entero3, opcion, basu;
	double doble1, doble2, doble3;

	do{


		printf("\nElija una opcion:\n");
		printf("1- Calcular el area de un rectangulo\n");
		printf("2- Calcular el area del circulo\n");
		printf("3- Calcular la longitud de la circunferencia\n");
		printf("4- Calcular el área del triangulo\n");
		printf("5- Funcion que devuelve 0\n");
		printf("6- Calculo de masa corporal IMC\n");
		printf("7- Calcular el opuesto de un número\n");
		printf("8- Calcular el inverso de un número\n");
		printf("9- Calcular el Valor absoluto\n");
		printf("10- Cambio de moneda de Euro a Dolar\n");
		printf("11- Cambio de moneda de Dolar a Euro\n");
		printf("12- Calcular una potencia\n");
		printf("13- Calcular la fuerza de atraccion entre dos cuerpos\n");
		printf("14- Calcular la suma de una serie\n");
		printf("0- salir\n");
		scanf("%d", &opcion);
		
		switch (opcion){
			case 1:
				printf("introuzca la base del cuadrado:\n");
				scanf("%d",&entero1);
				printf("introduzca la altura:\n");
				scanf("%d",&entero2);
				printf("El área del rectangulo es: %d\n\n\n",area_rectangulo(entero1,entero2) );
				break;
			case 2:
				printf("introuzca el radio de la circunferencia:\n");
				scanf("%lf",&doble1);
				printf("el area del circulo es %.2lf\n\n\n", area_circulo(doble1));		
				break;
			case 3:
				printf("introuzca el radio:\n");
				scanf("%lf",&doble1);
				printf("La longitud de la circunferencia es: %lf\n\n\n",longitud_circunferencia(doble1) );		
				break;
			case 4:
				printf("introuzca la base:\n");
				scanf("%d",&entero1);
				printf("introduzca la altura:\n");
				scanf("%d",&entero2);
				printf("El área del triangulo es: %lf\n\n\n",area_triangulo(entero1,entero2) );
				break;
			case 5:
				printf("%d\n\n\n", zero() );
				break;
			case 6:
				/*double imc (double peso, double alturacm);*/
				printf("introduce tu peso:\n");
				scanf("%lf",&doble1);
				printf("introduce tu altura en centimetros:\n");
				scanf("%lf",&doble2);
				printf("Tu IMC es: %lf\n\n\n",imc(doble1,doble2) );
				break;
			case 7:
				/*double opuesto (double opuesto);*/
				printf("introduce un numero para calcular su opuesto:\n");
				scanf("%lf",&doble1);
				printf("El número opuesto es: %lf\n\n\n", opuesto(doble1) );
				break;
			case 8:
				/*double inverso (double inverso);*/
				printf("introduce un numero para calcular su inverso:\n");
				scanf("%lf",&doble1);
				printf("El número inverso es: %lf\n\n\n", inverso(doble1) );
				break;
			case 9:
				/*int absoluto (int absoluto);*/
				printf("introduce un número para devolver el numero |absoluto|\n");
				scanf("%d",&entero1);
				printf("El resultado es |%d|\n\n\n",absoluto(entero1) );
				break;
			case 10:
				/*double euro2dolar(double euro);*/
				printf("Introduce la cantidad de Euros para pasar a Dolar\n");
				scanf("%lf",&doble1);
				printf("%lf euros equivalen a %lf dólares\n\n\n", doble1, euro2dolar(doble1) );
				break;
			case 11:
				/*double dolar2euro(double dolar);*/
				printf("Introduce la cantidad de Dólares para pasar a Euros\n");
				scanf("%lf",&doble1);
				printf("%lf dólares equivalen a %lf euros\n\n\n", doble1, dolar2euro(doble1) );
				break;
			case 12:
				/*double mypow(double base, int exponente);*/
				printf("Introduce la base:\n");
				scanf("%lf",&doble1);
				printf("introduce el exponente:\n");
				scanf("%d",&entero1);
				printf("El resultado de la potencia es %lf\n\n\n", mypow(doble1,entero1));
				break;
			case 13:
				/*double fatraccion (double masa1, double masa2, double distancia);*/
				printf("Introduce la masa del primer cuerpo:\n");
				scanf("%lf",&doble1);
				printf("Introduce la masa del segundo cuerpo:\n");
				scanf("%lf",&doble2);
				printf("Introduce la distancia\n");
				scanf("%lf",&doble3);
				printf("El resultado es %lf\n\n\n", fatraccion(doble1,doble2,doble3));
				break;
			case 14:
				/*int suma_serie (int n1, int n2);*/
				printf("introduce el primer numero:\n");
				scanf("%d",&entero1);
				printf("introduce el segundo numero:\n");
				scanf("%d",&entero2);
				printf("la suma de los números de la serie es: %d\n\n\n", suma_serie(entero1,entero2) );
				break;

		}
		printf("-------------------------------------------------\n");
	}while(opcion != 0);

	printf("Gracias y hasta luego\n");

	return 0;
}

/*Implementacion Prototipos*/
int area_rectangulo(int base,int altura){
	return base * altura;
}

double area_circulo(double radio){
	return PI * (radio * radio);
}

double longitud_circunferencia (double radio){
	return 2 * PI * radio;
}

double area_triangulo (int base,int altura){
	return base * altura / 2;
}

int zero (void){
	return 0;
}

double imc (double peso, double altura){
	return peso / altura;
}

double opuesto (double opuesto){
	return opuesto * (-1);
}

double inverso (double inverso){
	return 1/inverso;
}

int absoluto (int absoluto){
	if (absoluto>=0)
	{
		return absoluto;
	}else{
		return absoluto * (-1);
	}

}

double euro2dolar(double euro){
/**1.11*/
	return euro * CAMBIO;
} 

double dolar2euro(double dolar){
/**1.11*/
	return dolar / CAMBIO;
} 

double mypow(double base, int exponente){
	int basefija, i=0;
	basefija = base;
	while(i<exponente){
		base = base * basefija;
		i++;
	}
	return base;
}

/*fuerza atraccion entre 2 masas*/
double fatraccion (double masa1, double masa2, double distancia){
	double g = 6.67E-11; /* 6.67 x 10^(-11)*/
	/* g*m*m/r^2 */
	return (g*masa1*masa2)/(distancia*distancia);
}

int suma_serie (int n1, int n2){
	int resul;
	resul = n1;
	 for (n1; n1 < n2; ++n1)
	 {
	 	resul = resul + n1;
	 }
}