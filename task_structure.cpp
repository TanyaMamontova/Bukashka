#include <iostream>

using namespace std;

struct drob {
    int chisl;
    int znamen;
};

void sokr ( int& x, int& y) //Функция, для нахождения НОД двух чисел
{
int a, b, c;
a = x;
b = y;
    do
    {
        c = a % b;
        a = b;
        b = c;
    }
    while (b > 0);
    x /= a;
    y /= a;
}
 
int main()
{
  drob X;
  cout << "Введите числитель дроби: ";
    cin >> X.chisl;
    cout << "Введите знаменатель дроби: ";
    cin >> X.znamen;
    sokr (X.chisl, X.znamen);
    cout << "Дробь после сокращения: " << X.chisl << "/" << X.znamen; 
    cout << endl;
}
