#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio3
{
	int N{}, I{}, J{};
	std::vector<std::vector<int>> matriz(N, std::vector<int>(N));

	void submain()
	{
		std::cout << "Ingrese el orden de la matriz unitaria (N): ";
		std::cin >> N;
		matriz.resize(N, std::vector<int>(N));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i == j)
				{
					matriz[i][j] = 1;
				}
			}
		}

		std::cout << "Matriz unitaria de orden " << N << ":\n";
	
		for (int i = 0; i < N; i++)
		{
			std::cout << "|";
			for (int j = 0; j < N; j++)
			{
				std::cout << matriz[i][j] << "|";
			}
			std::cout << "\n";
		}

	}
}