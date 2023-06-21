//–екурсивна€ модель вычислени€ факториала
long double Factorial_Function(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1; 
    else return n * Factorial_Function(n - 1);
}