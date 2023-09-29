#include <iostream>
#include <vector>
#include <iomanip>
#include "ejercicios.h"

// es importante aclarar el uso del módulo vector de la liberia estándar de c++ debido a una diferencia importante que tiene con los arrays:
// estos últimos permiten trabajar exclusivamente con valores constantes y ya definidos previamente en el programa, por lo que crear matrices dinámicas resulta
// en algo imposible a menos que se opte por el uso de punteros; 
// por ello, para mejorar la comprensión del programa se optó por la opción de utilizar los vectores que ofrece la libreria estándar.

bool loop { true };
int userInput;


int main()
{	
	while (loop)
	{
		std::cout << "Indique con el numero respectivo el ejercicio a abrir: " << "\n"
				  << "(1) Ejercicio 1" << "\n" << "(2) Ejercicio 2" << "\n"
			      << "(3) Ejercicio 3" << "\n" << "(4) Ejercicio 4" << "\n"
				  << "(5) Ejercicio 5" << "\n" << "(6) Ejercicio 6" << "\n"
				  << "(7) Ejercicio 7" << "\n" << "(8) Ejercicio 8" << "\n"
				  << "(9) Ejercicio 9" << "\n";
		
		std::cin >> userInput;
		std::cout << "\nSe ha abierto el ejercicio numero " << userInput << "\n";
		std::cout << "----------------------------------------------------------\n \n";
		if (userInput == 1) { ejercicio1::submain(); }
		if (userInput == 2) { ejercicio2::submain(); }
		if (userInput == 3) { ejercicio3::submain(); }
		if (userInput == 4) { ejercicio4::submain(); }
		if (userInput == 5) { ejercicio5::submain(); }
		if (userInput == 6) { ejercicio6::submain(); }
		if (userInput == 7) { ejercicio7::submain(); }
		if (userInput == 8) { ejercicio8::submain(); }
		std::cout << "\n \n----------------------------------------------------------";
		std::cout << "Si desea ir a otro ejercicio, presione 1, si desea salir, presione 0" << "\n";
		std::cin >> userInput;

		if (userInput == 0)
		{
			loop = false;
		}
		else
		{
			;
		}
	}
}
