#include <iostream>

using namespace std;

struct drob {
    int chisl;
    int znamen;
};

void sokr (drob& foo) { //Функция, для нахождения НОД двух чисел
int a, b, c;
a = abs(foo.chisl);
b = abs(foo.znamen);
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }
foo.chisl /= a;
foo.znamen /= a;
}
 
int main() {
  drob X;
    cout << "Введите числитель дроби: ";
    cin >> X.chisl;
    cout << "Введите знаменатель дроби: ";
    cin >> X.znamen;
    sokr (X);
    if (X.chisl == 0  X.znamen == 0) {
    cout << "Некорректная дробь!";
}
else {
    cout << "Дробь после сокращения: ";
    if (X.chisl > 0 && X.znamen < 0  X.chisl < 0 && X.znamen > 0) {
        cout << "-";
    }
    cout << abs(X.chisl) << "/" << abs(X.znamen);
  }
}
