/* Ejercicio: rifa
Autor: Alejandro Toledo Cuenca	
Fecha creación: 09/02/2022
Descripción: simular una rifa  */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int eleccion, i, recaudado, contador, PANTALLA = 8000, CELULAR = 2000, LAVADORA = 6800, precio_boleto;

int main ()
{
	printf("Bienvenido al portal de rifas \n \n");
	printf("Aqui escogeras en cual quieres participar\n");
	printf("1. Pantalla 40 pulgadas (1,000 boletos) \n");
	printf("2. Celular (100 boletos)\n");
	printf("3. Lavadora (200 boletos)\n");
	cout << "\nEscoge una con el respectivo numero: (1, 2, 3) \n";
	cin >> eleccion;
	if (eleccion == 1)
	{
		printf("Has elegido participar en la rifa de la pantalla de 40 pulgadas \n");
		cout << "Escoge un numero de boleto del 1 al 1000: ";
		cin >> precio_boleto; 
		if (precio_boleto > 1000 or precio_boleto < 1)
		{
			printf("Por favor escoge una opción válida.");
		}
		else
		{
			cout << "El precio de tu boleto es $" << precio_boleto << "\n";
			for(i = 0; i < 1000; ++i) 
			{
				recaudado += i; 
			}
			cout << "El articulo rifado costo $" << PANTALLA << "\n";
			cout << "Para esta rifa se recaudaron $" << recaudado - PANTALLA;
		}
	}
	else if (eleccion == 2)
	{
		printf("Has elegido participar en la rifa del celular \n");
		cout << "Escoge un numero de boleto del 1 al 100: ";
		cin >> precio_boleto; 
		if (precio_boleto > 100 or precio_boleto < 1)
		{
			printf("Por favor escoge una opción válida.");
		}
		else
		{
			cout << "El precio de tu boleto es $" << precio_boleto << "\n";
			for(i = 0; i < 100; ++i) 
			{
				recaudado += i; 
			}
			cout << "El articulo rifado costo $" << CELULAR << "\n";
			cout << "Para esta rifa se recaudaron $" << recaudado - CELULAR;
		}
	}
	else if (eleccion == 3)
	{
		printf("Has elegido participar en la rifa de la lavadora \n");
		cout << "Escoge un numero de boleto del 1 al 200: ";
		cin >> precio_boleto; 
		if (precio_boleto > 200 or precio_boleto < 1)
		{
			printf("Por favor escoge una opción válida.");
		}
		else
		{
			cout << "El precio de tu boleto es $" << precio_boleto << "\n";
			for(i = 0; i < 200; ++i) 
			{
				recaudado += i; 
			}
			cout << "El articulo rifado costo $" << LAVADORA << "\n";
			cout << "Para esta rifa se recaudaron $" << recaudado - LAVADORA;
		}
	}
}





