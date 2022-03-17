#include <iostream>

using namespace std;

int Konn (char x, int y)
{
    char a1; // переменная для нахождения буквы в таблице
    int b1;  // переменная для указания строки возможного хода 
    int n = 1; //переменная для движения по строкам доски
    while (n <= 8) // цикл для работы на каждой строке доски
    {
        a1 = x;
        b1 = n;
        if ((y - n) == 2) 
            {
                if (x >= 'y')  //условие для нахождения на доске всегда
                {
                    a1 = x - 1;
                    cout << a1 << b1 << endl;
                } 
                if (x <= 'g') 
                {
                    a1 = x + 1;
                    cout << a1 << b1 << endl;
                }
            }
            
        if ((y - n) == -2) 
            {
                if (x >= 'y')
                {
                    a1 = x - 1;
                    cout << a1 << b1 << endl;
                } 
                
                if (x <= 'g')
                {
                    a1 = x + 1;
                    cout << a1 << b1 << endl;
                }
            
            }
            
        if ((y - n) == 1)
            {
                if (x >= 'c')
                {
                    a1 = x - 2;
                    cout << a1 << b1 << endl;
                } 
                if (x <= 'f')
                {
                    a1 = x + 2;
                    cout << a1 << b1 << endl;
                }
            }
            
        if ((y - n) == -1) 
            {
                if (x >= 'c')
                {
                    a1 = x - 2;
                    cout << a1 << b1 << endl;
                } 
                if (x <= 'f')
                {
                    {
                        a1 = x + 2;
                        cout << a1 << b1 << endl;
                    }
                }
               
            }
        n++;
    }
    return x;
}

int main()
{
    char x;
    int y;
    cout << "Введите расположения коня ";
    cin >> x; 
    cin >> y;
    cout << endl;
    cout << "Возможные ходы";
    cout << endl;
    Konn (x, y);
    return 0;
}
