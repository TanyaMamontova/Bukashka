#include <iostream>

using namespace std;

int minn (int array[], int n) // функция для подсчета минимального элемента массива
{
    int i;
    int min;
    min = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] <= min)
            min = array[i];
    }
    return min;
}

int maxx (int array[], int n) // функция для подсчета максимального элемента массива
{
    int i;
    int max;
    max = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] >= max)
            max = array[i];
    }
    return max;
}

int perestanovka (int array[], int n, int x, int y) // функция, переставляющая элементы местами

{   
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] == x)
            array[i] = y;
        else 
            if (array[i] == y)
            array[i] = x;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int maxi; 
    maxx (array, n);
    maxi = maxx (array, n);
    int mini;
    minn (array, n);
    mini = minn (array, n);
    cout << "Максимальный элемент массива: "<< maxi << endl;
    cout << "Минимальный элемент массива: "<< mini << endl;
    perestanovka (array, n, maxi, mini);
    int i;
    for (i = 0; i < n; i++)
        cout << array[i] << ' ';
    return 0;
}
