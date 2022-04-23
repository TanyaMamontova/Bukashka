#include <iostream>

using namespace std;

struct drob {
    int chisl;
    int znamen;
};

void sokr ( int& x, int& y) { //Функция, для нахождения НОД двух чисел
int a, b, c;
a = abs(x);
b = abs(y);
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }
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
    if (X.chisl == 0 || X.znamen == 0)
    cout << "Некорректная дробь!";
    if (X.chisl < 0 && X.znamen < 0 || X.chisl > 0 && X.znamen > 0)
    cout << "Дробь после сокращения: " << abs(X.chisl) << "/" << abs(X.znamen);
    if (X.chisl < 0 && X.znamen > 0 || X.chisl > 0 && X.znamen < 0)
    cout << "Дробь после сокращения: " << "-" << abs(X.chisl) << "/" << abs(X.znamen); 
    cout << endl;
}
