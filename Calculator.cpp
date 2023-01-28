#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>
#include <conio.h>

int main()
{

    while (true)
    {
        printf("1 = calculator \n 2 - exit \n");
        int op1;
        std::cin >> op1;
        int c;
        switch (op1)
        {
            case 1:
            {
                int a;
                int b;
                char oper;
                setlocale(LC_ALL, "Russian");
                std:: cout << "Выберите действие \n" << " Сложение\n" << " Вычитание\n" << " Умножение\n" << " Деление\n"<< " Фибоначчи \n"<< "Остаток от деления\n" << "Выход из программы" << "\n";
                printf("Первое число \n ");
                std::cin >> a;
                printf("Операция \n ");
                std::cin >> oper;
                printf("Второе чило \n ");
                std::cin >> b;
                if (oper == '+')
                    c = a + b;
                if (oper == '-')
                    c = a - b;
                if (oper == '*')
                    c = a * b;
                if (oper == '/')
                    c = a / b;
                if (oper == '%')
                    c = a % b;

            }
            case 2:
            {
                break;
            }
        }
        printf("Result = %d \n", c);
    }
}
