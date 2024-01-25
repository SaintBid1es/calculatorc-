
#include <iostream>
#include <Windows.h>
#include <cmath> 
#include <string>
using namespace std;
int main()
{
	int i;
	int res;
	int n=0;
	res = 1;
	setlocale(LC_ALL, "RU");
	int a, b, c;
	char next;
	do {
		cout << "Добро пожаловать в простенький калькулятор!\n";
		cout << "Какую операцию из предложенных вы хотите сделать:\n1.Сложение\n2.Вычитание\n3.Деление\n4.Умножение\n5.Возведение в степень\n6.Нахождение квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы\n";
		cin >> c;
		switch (c)
		{
		case 1:
			cout << "Введите переменную a: ";
			cin >> a;
			cout << "Введите переменную b: ";
			cin >> b;
			cout << "Сложение чисел: " << a + b << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			continue;
		case 2:
			cout << "Введите переменную a: ";
			cin >> a;
			cout << "Введите переменную b: ";
			cin >> b;
			cout << "Вычитание чисел:" << a - b << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 3:

			cout << "Введите переменную a: ";
			cin >> a;
			cout << "Введите переменную b: ";
			cin >> b;
			if (a && b != 0)
			{
				cout << "Деление чисел :" << a / b << endl;
				cout << "Хотите ли вы продолжить?(y/n)\n";
				cin >> next;
			}
			else
			{
				cout << "Ошибка.Введите пожалуйста другое число,которое не равно нулю.";
			}
			break;
		case 4:
			cout << "Введите переменную a: ";
			cin >> a;
			cout << "Введите переменную b: ";
			cin >> b;
			cout << "Умножение чисел:" << a * b << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 5:
			cout << "Введите число и степень: ";
			cin >> a >> b;
			cout << "Результат возведения в степень: " << pow(a, b) << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 6:
			cout << "Введите число для извлечения квадратного корня: ";
			cin >> a;
			cout << "Результат извлечения квадратного корня: " << sqrt(a) << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 7:
			cout << "Введите число для нахождения 1 процента: ";
			cin >> a;
			cout << "Результат нахождения 1 процента: " << a * 0.01 << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 8:

			cout << "Введите число для вычисления факториала: ";
			cin >> a;
			for (i = 1; i <= a; i++) {
				res = res * i;
			}
			cout << "Результат вычисления факториала: " << res << endl;
			cout << "Хотите ли вы продолжить?(y/n)\n";
			cin >> next;
			break;
		case 9:
			cout << "Программа завершенна";
			return 0;
		default:
			cout << "Введена не правильная операция.Пожалуйста попробуйте еще раз.";
			return 0;

		}
		cout << endl;
	} while (next == 'y');
	
	return 0;
}






