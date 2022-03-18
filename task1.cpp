#include <iostream>

using namespace std;


int main(){
    int n;
    cout << "Ввведите количество элементов массива:"<< endl;
    cin >> n;
    int array [n];
    cout << "Введи элементы массива:" << endl;
    for (int i = 0; i < n; i++)
        cin >> array[i];
        
    int max = array [0]; 
    int min = array [0]; 
    int kmin; // переменная для запоминания номера минимального элемента массива
    int kmax; // переменная для запоминания номера максимального элемента массива
    
    for (int i = 0; i < n; i++){
        if (array [i] >= max){
            max = array[i];
            kmax = i;
        }
        if (array[i] <= min){
            min = array[i];
            kmin = i;
        }
    }
    cout << "Максимальное значение массива: " << max << endl;
    cout << "Минимальное значение массива: "<< min << endl;
    
    int change;
    change = array[kmin];
    array[kmin] = array[kmax];
    array[kmax] = change;
    
    cout << endl << "Измененный массив:" << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << ' ';
    return 0;
}
