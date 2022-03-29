/* Ejercicio: rifa
Autor: Alejandro Toledo Cuenca	
Fecha creación: 09/02/2022
Descripción: simular una rifa  */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int cantidad_boletos, i, recaudado, contador, articulo;
string numero_rifa;

int main ()
{
	printf("Programa para calcular ganancia de rifas \n\n");
	cout << "Ingresa la cantidad de boletos: \n";
	cin >> cantidad_boletos;
	for(i = 0; i < cantidad_boletos; ++i) 
	{
		recaudado += i; 
	}
 	cout << "Cuanto costo el articulo rifado?\n";
	cin >> articulo;
	cout << "Se recaudaron $" << recaudado - articulo <<" pesos\n";
}





