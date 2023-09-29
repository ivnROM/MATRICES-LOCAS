#include <iostream>
#include <vector>
#include "ejercicios.h"

namespace ejercicio5
{
    int M{}, N{}, P{};
    std::vector<std::vector<int>> matrizA(M, std::vector<int>(N)), matrizB(N, std::vector<int>(P)), matrizC(M, std::vector<int>(P));

    void multiplicacionMatrices();

    void submain()
    {
        std::cout << "Ingrese el numero de filas de la matriz A: ";
        std::cin >> M;
        std::cout << "Ingrese el numero de columnas de la matriz A: ";
        std::cin >> N;
        std::cout << "Ingrese el numero de columnas de la matriz B: ";
        std::cin >> P;
        matrizA.resize(M, std::vector<int>(N));
        matrizB.resize(N, std::vector<int>(P));
        matrizC.resize(M, std::vector<int>(P));
        if (N != P)
        {
            std::cout << "La multiplicacion de matrices no es posible debido a dimensiones incorrectas.";
        }
        else
        {
            multiplicacionMatrices();
        }
    }

    void multiplicacionMatrices()
    {
        std::cout << "MATRIZ A: \n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                std::cout << "Elemento " << j + 1 << "-" << i + 1 << ": ";
                std::cin >> matrizA[i][j];
            }
        }

        std::cout << "MATRIZ B: \n";
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < P; j++)
            {
                std::cout << "Elemento " << j + 1 << "-" << i + 1 << ": ";
                std::cin >> matrizB[i][j];
            }
        }

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < P; j++)
            {
                for (int k = 0; k < N; k++)
                {
                    matrizC[i][j] = matrizC[i][j] + matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        std::cout << "La matriz resultante C de AxB es: \n";

        for (int i = 0; i < M; i++)
        {
            std::cout << "|";
            for (int j = 0; j < P; j++)
            {
                std::cout << matrizC[i][j] << "|";
            }
            std::cout << "\n";
        }
    }
}