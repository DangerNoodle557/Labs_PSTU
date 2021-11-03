#include <iostream> 
using namespace std; 
int main()//начало программы
{
    setlocale(LC_ALL, "Russian"); //поддержка русского языка
    float c, f; // объявляем переменные c, f
    cout << "Введите градусы по Фаренгейту:" << endl;
    cin >> f; //ввод переменной
    c = (5.0 / 9.0) * (f - 32); 
    cout << "Градусы Цельсия" << endl; // вывод на экран
    cout << c << endl;// вывод на экран
}