#include <iostream>
#include <windows.h>
#pragma hdrstop
#pragma argsused
using namespace std;
typedef BOOL (WINAPI *SETCONSOLEFONT)(HANDLE, DWORD);
SETCONSOLEFONT SetConsoleFont;
int main(){
	int a, b, c, d, p ;
	system("mode con cols=50 lines=15");
	HMODULE hmod = GetModuleHandleA("KERNEL32.DLL");
	SetConsoleFont = (SETCONSOLEFONT)GetProcAddress(hmod, "SetConsoleFont");
	if (!SetConsoleFont) { cout << "error\n"; exit(1); }
	SetConsoleFont(GetStdHandle(STD_OUTPUT_HANDLE),9);
	system("cls");
	const int color = system("color 1f");
	setlocale(LC_ALL, "RUS");
	system("title Калькулятор на C++");
	cout << "Добро пожаловать в простой калькулятор на C++" << endl;
	cout << "Выбирите функцию:" << endl;
	cout << "1 - Сложение" << endl;
	cout << "2 - Вычитание" << endl;
	cout << "3 - Умножение" << endl;
	cout << "4 - Деление" << endl;
	cout << "5 - Возведение в степень" << endl;
	cout << "6 - Квадратный корень" << endl;
	cout << "7 - Действия с процентами" << endl;
	cout << "8 - Выход" << endl;
	cout << " " << endl;
	cout << "Введите номер функции: " << ends;
	cin >> d;
	if (d == 1) {
		system("cls");
		cout << "Вы выбрали сложение" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;
		cout << "Ответ: " << (a + b) << endl;
		system("pause");
		main();
	}
	if (d == 2) {
		system("cls");
		cout << "Вы выбрали вычитание" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;
		cout << "Ответ: " << (a - b) << endl;
		system("pause");
		main();
	}
	if (d == 3) {
		system("cls");
		cout << "Вы выбрали умножение" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;
		cout << "Ответ: " << (a * b) << endl;
		system("pause");
		main();
	}
	if (d == 4) {
		system("cls");
		cout << "Вы выбрали деление" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Первое число: ";
		cin >> a;
		cout << "Второе число: ";
		cin >> b;
		if (b == 0) {
			system("cls");
			cout << "На ноль делить нельзя!" << endl;
			system("pause");
			main();
		}
		else {
			cout << "Ответ: " << (a / b) << endl;
			system("pause");
			main();
		}
	}
	if (d == 5) {
		system("cls");
		cout << "Вы выбрали возведение в степерь" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Число: ";
		cin >> a;
		cout << "Степень: ";
		cin >> b;
		cout << "Ответ: " << pow(a, b) << endl;
		system("pause");
		main();
	}
	if (d == 6) {
		system("cls");
		cout << "Вы выбрали квадратный корень" << endl;
		cout << "Введите числа с которыми будет проходить операция" << endl;
		cout << " " << endl;
		double a, b;
		cout << "Выберите число: ";
		cin >> a;
		cout << "Ответ: " << sqrt(a) << endl;
		system("pause");
		main();
	}
	if (d == 7) {
		system("cls");
		cout << "Вы выбрали дейстия с процентами" << endl;
		cout << "Введите номер функции" << endl;
		cout << "1 - Сложение" << endl;
		cout << "2 - Вычитание" << endl;
		cout << "Введите номер функции: " << ends;
		cin >> p;
		if (p == 1) {
			system("cls");
			cout << "Вы выбрали дейстия с процентами: сложение" << endl;
			cout << "Введите числа с которыми будет проходить операция" << endl;
			cout << " " << endl;
			double a, b;
			cout << "Число: ";
			cin >> a;
			cout << "Проценты: ";
			cin >> b;
			cout << "Ответ: " << (a + (a / 100 * b)) << endl;
			system("pause");
			system("cls");
			main();
		}
		if (p == 2) {
			system("cls");
			cout << "Вы выбрали дейстия с процентами: вычитание" << endl;
			cout << "Введите числа с которыми будет проходить операция" << endl;
			cout << " " << endl;
			cout << " " << endl;
			double a, b;
			cout << "Число: ";
			cin >> a;
			cout << "Проценты: ";
			cin >> b;
			cout << "Ответ: " << (a - (a / 100 * b)) << endl;
			system("pause");
			system("cls");
			main();
		}
	}
	if (d == 8) {
		exit(0);
	}
	else {
		system("cls");
		cout << "Такой функции не существует!" << endl;
		system("pause");
		main();
	}
	system("cls");
	return 0;

}