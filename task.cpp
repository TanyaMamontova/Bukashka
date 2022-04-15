#include <iostream>

using namespace std;

int* sum(int n, int* a, int* b){ //Функция, суммирующая элементы двух массивов
    int* sarr = new int[n];
    
    for (int i = 0; i<n; i++)
    sarr[i] = a[i] + b[i];
    
    for (int i = 0; i<n; i++)
    cout << sarr[i] << " ";
    
    return 0;
}

int* vichet(int n, int* a, int* b){ //Функция, осуществляющая вычитание элемента одного массива из элемента другого массива
    int* varr = new int[n];
    
    for (int i = 0; i<n; i++)
    varr[i] = a[i] - b[i];
    
    for (int i = 0; i<n; i++)
    cout << varr[i] << " ";
    
    return 0;
}

int main(){
    
    int n;
    cout << "Введите количество элементов массива:" << endl;
    cin >> n;
    
    cout << "Введите элементы 1-го массива:" << endl;
    
    int arr[n];
    for (int i = 0; i<n; i++)
    cin >> arr[i];
    
    cout << "Введите знак:" << endl;
    char x;
    cin >> x;
    
    cout << "Введите элементы 2-го массива:" << endl;
    
    int brr[n];
    for (int i = 0; i < n; i++)
    cin >> brr[i];
    
    cout << "Новый массив:" << endl;
    
    if (x == '+')
    *sum(n, arr, brr);
    
    if (x == '-')
    *vichet(n, arr, brr);
    
    return 0;
}
