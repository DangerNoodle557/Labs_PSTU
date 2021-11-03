#include <iostream> 
using namespace std;
int main() //начало программы
{
    setlocale(LC_ALL, "Russian"); //поддержка русского языка
    char a, b, c, d, e; //объявляем переменные a, b, c, d, e
    cout << "Введите 5 символов:" << endl;// вывод на экран
    cin >> a >> b >> c >> d >> e; //ввод переменных
    cout << "В обратной последовательности:" << endl;// вывод на экран
    cout << e << d << c << b << a; // вывод на экран
} 