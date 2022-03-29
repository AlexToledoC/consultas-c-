/* Ejercicio: menú pensión tercera edad
Autor: Alejandro Toledo Cuenca	
Fecha creación: 18/01/2022
Descripcion: con base en la edad de las personas, determinar si son acreedores a la pensión bienestar tercera edad  */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int edad_minima = 65, edad, faltante; 
string otra_figura;
int main ()
{
	printf("Este programa es para que puedas saber si puedes recibir pensión del bienestar para personas de la tercera edad\n");
	getch();
	system("cls");
	cout << "\nIntroduce tu edad:\n";
	cin >> edad;
	if (edad >= edad_minima)
	{
		printf("Tienes 65 años o más. Puedes solicitar la pensión del bienestar.");
	}
	else
	{
	faltante = edad_minima - edad;
	cout << "Aún no cumples 65 años. Te faltan " << faltante << " años para poder tramitar la pensión del bienestar.";
	}
}

