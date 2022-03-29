/* Ejercicio: examen
Autor: Alejandro Toledo Cuenca	
Fecha de creación: 14/03/2022
Descripción: calcular precio del seguro */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int main(), monto_seguro, cobertura;

string otra_operacion;

double funcion_iva(), funcion_limitada(), funcion_amplia(), funcion_amplia_grua(), 
funcion_otra_operacion(), total, subtotal, iva;


double funcion_otra_operacion()
{
	cout << "\nDesea realizar otra operacion? Escriba si o no: \n";
	cin >> otra_operacion;
	if (otra_operacion == "si" or otra_operacion == "Si" or otra_operacion == "si ")
	{
		main();
	}
	else
	{
		printf("\nGracias por su visita.");
	}
}

double funcion_iva(double subtotal)
{
	total = subtotal * 1.16;
	iva = subtotal * .16;
	cout << "\nIVA $" << iva;
	cout << "\nEl total a pagar es $" << total;
}


double funcion_limitada(int monto_seguro)
{
	subtotal = monto_seguro / 2;
	cout << "Subtotal $" << subtotal;
	funcion_iva(subtotal);
}


double funcion_amplia(int monto_seguro)
{
	subtotal = monto_seguro;
	cout << "Subtotal $" << subtotal;
	funcion_iva(subtotal);
}


double funcion_amplia_grua(int monto_seguro)
{	
	subtotal = monto_seguro * 1.17;
	cout << "Subtotal $" << subtotal;
	funcion_iva(subtotal);
}


int main()
{
	system("cls");
	printf("Bienvenid@ al programa de cotizaciones de seguro. \n");
	cout << "Ingrese el monto del seguro: \n$";
	cin >> monto_seguro;
	cout << "\nEscoja el tipo de cobertura \n";
	printf("1. Limitada \n");
	printf("2. Amplia sin servicio de grúa\n");
	printf("3. Amplia con servicio de grúa\n ");
	cout << "Ingrese el respectivo numero de la cobertura que desea (1-3):\n";
	cin >> cobertura;
	switch (cobertura)
	{
		case 1:
			{
				funcion_limitada(monto_seguro);
				break;
			}
		case 2:
			{
				funcion_amplia(monto_seguro);
				break;
			}
		case 3:
			{
				funcion_amplia_grua(monto_seguro);
				break;
			}
		default:
			{
				printf("Por favor, ingresa una opción correcta.");
				break;
			}
	}
	funcion_otra_operacion();
}
