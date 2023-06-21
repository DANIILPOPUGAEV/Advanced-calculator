#include <iostream>
#include "Choose_Massage.h"
#include "Exponent_Function.h"

int main()
{
    setlocale(LC_ALL, "ru");

    bool tf = true;
    char operation;

    while (tf)
    {
        Choose_Massage();

        std::cin >> operation;

        //Меню выбора действия (по возможно можно дополнить, добавив ещё функции)
        switch (operation)
        {
            case '1': std::cout << "Итоговый результат: " << Exponent_Function()<<"\n"; system("pause"); break;
            case '2': std::cout << "Завершение работы.\n"; tf = false; break;
            default: break;
        }
    }
}