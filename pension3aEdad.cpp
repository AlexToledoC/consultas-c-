/* Ejercicio: men� pensi�n tercera edad
Autor: Alejandro Toledo Cuenca	
Fecha creaci�n: 18/01/2022
Descripcion: con base en la edad de las personas, determinar si son acreedores a la pensi�n bienestar tercera edad  */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int edad_minima = 65, edad, faltante; 
string otra_figura;
int main ()
{
	printf("Este programa es para que puedas saber si puedes recibir pensi�n del bienestar para personas de la tercera edad\n");
	getch();
	system("cls");
	cout << "\nIntroduce tu edad:\n";
	cin >> edad;
	if (edad >= edad_minima)
	{
		printf("Tienes 65 a�os o m�s. Puedes solicitar la pensi�n del bienestar.");
	}
	else
	{
	faltante = edad_minima - edad;
	cout << "A�n no cumples 65 a�os. Te faltan " << faltante << " a�os para poder tramitar la pensi�n del bienestar.";
	}
}

