#include <iostream>
#include <vector>
#include <iomanip>
#include "ejercicios.h"

namespace ejercicio7
{
	int M{};
	int N{ 12 };
	std::vector<std::vector<long int>> matriz;

	void analisisVentas();

	void submain()
	{
		std::cout << "Ingrese el numero de sucursales: \n";
		std::cin >> M;
		matriz.resize(M, std::vector<long int>(N));

		for (int i{ 0 }; i < M; i++)
		{
			std::cout << " \nSucursal numero " << i + 1 << "\n";
			for (int j{ 0 }; j < N; j++)
			{
				std::cout << "Ventas en mes " << j + 1 << ": ";
				std::cin >> matriz[i][j];
			}
		}
		std::cout << "\n";

		analisisVentas();

	}

	void analisisVentas()
	{
		long int totalVentasG{}, totalVentasS{}, mayorVentaS{}, menorVentaS{};
		int x{}, y{}; // x e y sirven para guardar el n° de la sucursal y el mes con menores ventas

		for (int i{ 0 }; i < M; i++)
		{
			for (int j{ 0 }; j < N; j++)
			{
				totalVentasS += matriz[i][j];
			}

			if (totalVentasS > mayorVentaS)
			{
				mayorVentaS = totalVentasS;
				x = i;
			}

			totalVentasG += totalVentasS;
			std::cout << "Hubo un total de " << totalVentasS << " ventas en la sucursal " << i + 1 << "\n";
			totalVentasS = 0;
		}

		std::cout << "\nA lo largo del año, la compañia hizo un total de " << totalVentasG << " ventas \n";
		std::cout << "\nLa sucursal con mayor numero de ventas fue la sucursal " << x + 1 << " con un total de " << mayorVentaS << " ventas \n";

		menorVentaS = mayorVentaS; // cambio de valor para que la variable del for que se encuentra abajo pueda tener una referencia aparte de 0
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (matriz[i][j] < menorVentaS)
				{
					menorVentaS = matriz[i][j];
					y = j;
				}
			}
		}


		std::cout << "\nEl mes que menos vendio la compañia fue el mes " << y + 1 << " con un total de " << menorVentaS << " ventas \n";

	}
}