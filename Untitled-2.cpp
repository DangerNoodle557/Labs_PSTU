#include <iostream>
using namespace std; 
int main() //начало программы
{
	setlocale(LC_ALL, "Russian"); //поддержка русского языка
	int g; // объявляем переменную c
	float f; // объявляем переменную f
	cout << "Введите количество галлонов:" << endl; // вывод на экран
	cin >> g;  //ввод переменной
	f = g / 7.481;
	cout << f; // вывод на экран
}