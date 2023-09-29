#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio6 
{
	int n{}, productoEscalar{};
	std::vector<int> vectorA, vectorB;

	void submain()
	{
		std::cout << "Ingrese la longitud de los vectores A y B: \n";
		std::cin >> n;

		std::cout << "Ingrese los elementos del vector A: \n";
	
		for (int i = 0; i < n; i++)
		{
			int input{};
			std::cin >> input;
			vectorA.push_back(input);
		}

		std::cout << "Ingrese los elementos del vector B: \n";

		for (int i = 0; i < n; i++)
		{
			int input{};
			std::cin >> input;
			vectorB.push_back(input);
		}

		for (int i = 0; i < n; i++)
		{
			productoEscalar = productoEscalar + vectorA[i] * vectorB[i];
		}

		std::cout << "\nEl producto escalar de los vectores A y B es: " << productoEscalar;
	}
}