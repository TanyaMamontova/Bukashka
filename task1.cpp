#include <iostream>

using namespace std;

int Kon (char a, int b)
{
    char p; // переменная для нахождения буквы на доске
    int st;  // переменная для указания строки возможного хода 
    int n = 1; //переменная для движения по строкам доски
    while (n <= 8) // цикл движения по доске
    {
        p = a;
        st = n;
        if ((b - n) == 2) 
            {
                if (a >= 'b')  //условие нахождения на доске
                {
                    p = a - 1;
                    cout << p << st << endl;
                } 
                if (a <= 'g') 
                {
                    p = a + 1;
                    cout << p << st << endl;
                }
            }
            
        if ((b - n) == -2) 
            {
                if (a >= 'b')
                {
                    p = a - 1;
                    cout << p << st << endl;
                } 
                
                if (a <= 'g')
                {
                    p = a + 1;
                    cout << p << st << endl;
                }
            
            }
            
        if ((b - n) == 1)
            {
                if (a >= 'c')
                {
                    p = a - 2;
                    cout << p << st << endl;
                } 
                if (a <= 'f')
                {
                    p = a + 2;
                    cout << p << st << endl;
                }
            }
            
        if ((b - n) == -1) 
            {
                if (a >= 'c')
                {
                    p = a - 2;
                    cout << p << st << endl;
                } 
                if (a <= 'f')
                {
                    {
                        p = a + 2;
                        cout << p << st << endl;
                    }
                }
               
            }
        
        n++;
    }
    
    return a;
}

int main()
{
    char a;
    int b;
    cout << "Введите расположение коня: ";
    cin >> a; 
    cin >> b;
    cout << endl;
    cout << "Возможные ходы коня: ";
    cout << endl;
    Kon (a, b);

    return 0;
}
