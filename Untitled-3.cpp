#include <iostream> 
using namespace std; 
int main()//начало программы
{
    setlocale(LC_ALL, "Russian"); //поддержка русского языка
    const int a = 10; // объявляем константу а
    int b; // объявляем переменную b
    b = a * 2; 
    cout << "Вывод:" << endl; // вывод на экран
    cout << a << endl; // вывод на экран
    cout << b << endl; // вывод на экран
    cout << --b << endl;  // вывод на экран
}