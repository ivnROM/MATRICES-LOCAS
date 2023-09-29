#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio2
{
	int M{}, N{};
	std::vector<std::vector<int>> matrizA(M, std::vector<int>(N)), transpuestaA(N, std::vector<int>(M));

	void submain()
	{
		std::cout << "Ingrese el numero de filas (M): \n";
		std::cin >> M;
		std::cout << "Ingrese el numero de columnas (N): \n";
		std::cin >> N;
		matrizA.resize(M, std::vector<int>(N));
		transpuestaA.resize(N, std::vector<int>(M));

		std::cout << "\nIngrese los elementos de la matriz A: \n";

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				std::cout << "Elemento " << i + 1 << "-" << j + 1 << ": ";
				std::cin >> matrizA[i][j];
			}
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				transpuestaA[j][i] = matrizA[i][j];
			}
		}


		std::cout << "\nLa matriz transpuesta de: \n";

		for (int i = 0; i < M; i++)
		{
			std::cout << "|";
			for (int j = 0; j < N; j++)
			{
				std::cout << matrizA[i][j] << "|";
			}
			std::cout << "\n";
		}

		std::cout << "es: \n";
		for (int i = 0; i < N; i++)
		{
			std::cout << "|";
			for (int j = 0; j < M; j++)
			{
				std::cout << transpuestaA[i][j] << "|";
			}
			std::cout << "\n";
		}
	}
}