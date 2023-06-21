//Вспомогательная показательно-
long double Power_Exponential_Function(double x, int  i)
{
    long double result = 1;

    if (i == 0) return 1;

    if (i > 0)
    {
        for (int step = 0; step < i; step++)
            result = result * x;
        return result;
    }

    if (i < 0)
    {
        for (int step = 0; step < i; step++)
            result = result * (1 / x);
        return result;
    }
}