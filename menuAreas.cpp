/* Ejercicio: menú áreas
Autor: Alejandro Toledo Cuenca	
Fecha creación: 17/01/2022
Descripcion: dar a escoger tres figuras para sacar el área */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
double base, altura, area;
int seleccion; 
string otra_figura;
int main ()
{
	printf("Este programa es para que puedas sacar el área de distintas figuras\n");
	getch();
	system("cls");
	do 
	{
		cout << "\nEscoge una figura introduciendo su repectivo número (1, 2, 3):\n";
		printf("1. Rectángulo \n");
		printf("2. Cuadrado \n");
		printf("3. Triángulo \n");
		cin >> seleccion;
		switch(seleccion)
		{
			case 1:
			{
				cout << "Introduce la base\n";
				cin >> base;
				cout << "Introduce la altura\n";
				cin >> altura;
				area = base * altura;
				if (base == altura)
				{
				cout << "Tu figura es un cuadrado. El área del cuadrado es " << area << "\n";					
				}
				else
				{
				cout << "El área del rectángulo es " << area << "\n";
					
				}
				break;
			}
			case 2:
			{
				cout << "Introduce el lado del cuadrado\n";
				cin >> base;
				area = base * base;
				cout << "El área del cuadrado es " << area << "\n";
				break;
			}
			case 3:
			{
				cout << "Introduce la base\n";
				cin >> base;
				cout << "Introduce la altura\n";
				cin >> altura;
				area = (base * altura)/2;
				cout << "El área del triángulo es " << area << "\n";
			}
			default:
			{
				printf("Por favor, ingresa una opción válida.\n");
				break;
			}
		}
		cout << "\n¿Deseas calcular el área de otra figura?\nEscribe si o no\n";
		cin >> otra_figura;
		system("cls");
	}
	while (otra_figura == "si");
}

