#include <iostream>

using namespace std;

int login (string l)
{
    string p;
    int k = 0;
    string password = "program2022";
    while (k < 3)
    {
        cout << endl << "Введите пароль: ";
        cin >> p;
        if (p == password)
        {
         cout << "Вход выполнен успешно! Пользователь корректный и пароль подходит к нему!";
          break;
          return true;
        }
        else
        {
            cout << "Неверный пароль. ";
            if (k == 2)
            {
               throw "Попытка входа не удалась";
               return false;
            }
        }
        k++;
    }
}

int main()
{
    string l;
    cout << "Введите логин: ";
    cin >> l;
    cout << endl;
    int k = 0;
    try
    {
         login (l);
    }
    catch (const char *error)
    {
        cout << error;
    }
    return 0;
}
