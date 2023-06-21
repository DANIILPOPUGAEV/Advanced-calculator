#include <iostream>
#include "Power_Exponential_Function.h"
#include "Factorial_Function.h"

long double Exponent_Function()
{
    system("CLS");

    double x; std::cin >> x;
    double result = 0; double sum;

    std::cout << "¬ведите значение х: ";

    for (short i = 0; i < 100; i++)
    {
        sum = Power_Exponential_Function(x, i) / Factorial_Function(i);
        result = result + sum;
    }

    return result;
}