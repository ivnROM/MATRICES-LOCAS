#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio1
{
	int N{}, M{};

	std::vector<std::vector<int>> matriz(N, std::vector<int>(M));

	void promedios();

	void submain()
	{
		std::cout << "Ingrese la cantidad de filas y la cantidad de columnas: \n";
		std::cout << "Numero de filas: ";
		std::cin >> M;

		std::cout << "Numero de columnas: ";
		std::cin >> N;
		std::cout << "Rellene la matriz: \n";
		matriz.resize(N, std::vector<int>(M));

		for (int i = 0; i < N; i++)
		{
			std::cout << "Columna numero " << i + 1 << "\n";
			for (int j = 0; j < M; j++)
			{
				std::cin >> matriz[i][j];
			}
		}

		if (M == N)
		{
			std::cout << "La matriz es cuadrada \n";
		}
		else
		{
			std::cout << "La matriz no es cuadrada \n";
		}
		promedios();
	}

	void promedios()
	{
		int promedioN{}, promedioM{}, promedioT{};

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				promedioM += matriz[i][j];
				promedioT += matriz[i][j];
			}
		}

		std::cout << "El promedio de filas es: " << promedioM / M << "\n";

		for (int j = 0; j < M; j++)
		{
			for (int i = 0; i < N; i++)
			{
				promedioN += matriz[i][j];
				promedioT += matriz[i][j];
			}

			std::cout << "El promedio de la columna " << j + 1 << " es: " << promedioN / N << "\n";
			promedioN = 0;
		}

		promedioT = promedioT / (M * N);
		std::cout << "El promedio de todos los elementos es: " << promedioT;
	}
}