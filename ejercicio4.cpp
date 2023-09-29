#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio4
{
	int K{}, M{}, N{};

	std::vector<std::vector<int>> matriz(M, std::vector<int>(N));

	void submain()
	{
		std::cout << "Ingrese el numero de filas (M): \n";
		std::cin >> M;
		std::cout << "Ingrese el numero de columnas (N): \n";
		std::cin >> N;
		std::cout << "Ingrese el valor de K: \n";
		std::cin >> K;
		matriz.resize(M, std::vector<int>(N));

		std::cout << "\nIngrese los elementos de la matriz A: \n";
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cout << "Elemento " << i + 1 << "-" << j + 1 << ":";
				std::cin >> matriz[i][j];
			}
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				matriz[i][j] = matriz[i][j] * K;
			}
		}


		std::cout << "Matriz resultante después de multiplicar por " << K << " : \n";

		for (int i = 0; i < M; i++)
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