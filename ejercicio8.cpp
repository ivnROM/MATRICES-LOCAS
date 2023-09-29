#include <iostream>
#include <vector>
#include <iomanip>
#include "ejercicios.h"

namespace ejercicio8
{
	int M{};
	int N{ 6 };
	std::vector<std::vector<float>> matriz;

	void promedios();

	void submain()
	{

		std::cout << "Ingrese el numero de estudiantes: \n";
		std::cin >> M;
		matriz.resize(M, std::vector<float>(N));

		for (int i{ 0 }; i < M; i++)
		{
			std::cout << " \nEstudiante numero " << i + 1 << "\n";
			for (int j{ 0 }; j < N; j++)
			{
				std::cout << "Nota " << j + 1 << ": ";
				std::cin >> matriz[i][j];
			}
		}
		std::cout << "\n";
		promedios();
	}

	void promedios()
	{
		for (int i{ 0 }; i < M; i++)
		{
			float notasTotales{};
			for (int j{ 0 }; j < N; j++)
			{
				notasTotales += matriz[i][j];
			}
			std::cout << "El promedio del estudiante " << i + 1 << " es: " << std::setprecision(2) << (notasTotales / static_cast<float>(N)) << "\n";
		}

		std::cout << "\n";

		for (int j{ 0 }; j < N; j++)
		{
			int aprobados{}, reprobados{};
			float notaMaterias{};
			for (int i{ 0 }; i < M; i++)
			{
				if (matriz[i][j] >= 6)
				{
					aprobados += 1;
				}
				else
				{
					reprobados += 1;
				}

				notaMaterias += matriz[i][j];
			}
			std::cout << "El promedio de la materia " << j + 1 << " es: " << std::setprecision(2) << (notaMaterias / static_cast<float>(M)) << "\n";
			std::cout << "Hubieron " << aprobados << " estudiantes que aprobaron y " << reprobados << " que reprobaron \n";
		}
	}
}
