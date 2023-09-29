#pragma once
#include <vector>
#include <iostream>
#include <iomanip>

namespace ejercicio1 
{
    extern int N;
    extern int M;
    extern std::vector<std::vector<int>> matriz;

    void promedios();
    void submain();
};

namespace ejercicio2 
{
    extern int M;
    extern int N;
    extern std::vector<std::vector<int>> matrizA;
    extern std::vector<std::vector<int>> transpuestaA;

    void submain();
};

namespace ejercicio3 
{
    extern int N;
    extern int I;
    extern int J;
    extern std::vector<std::vector<int>> matriz;

    void submain();
};

namespace ejercicio4 
{
    extern int K;
    extern int M;
    extern int N;
    extern std::vector<std::vector<int>> matriz;

    void submain();
};

namespace ejercicio5 
{
    extern int M;
    extern int N;
    extern int P;
    extern std::vector<std::vector<int>> matrizA;
    extern std::vector<std::vector<int>> matrizB;
    extern std::vector<std::vector<int>> matrizC;

    void multiplicacionMatrices();
    void submain();
};

namespace ejercicio6 
{
    extern int n;
    extern int productoEscalar;
    extern std::vector<int> vectorA;
    extern std::vector<int> vectorB;

    void submain();
};

namespace ejercicio7 
{
    extern int M;
    extern int N;
    extern std::vector<std::vector<long int>> matriz;

    void analisisVentas();
    void submain();
};


namespace ejercicio8 
{
    extern int M;
    extern int N;
    extern std::vector<std::vector<float>> matriz;

    void promedios();
    void submain();
};
