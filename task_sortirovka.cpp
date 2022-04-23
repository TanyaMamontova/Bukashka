#include <iostream>

using namespace std;

void sortirovka(int size, int* sarr) { //Функция для сортировки массива пузырьком по возрастанию
 int schet = 0;
 int max;
 while (schet < size){
     for(int i = 0; i < size; i++){
            for (int j = 0; j < i; j++){
                 if (sarr[j] > sarr[j+1]){
                 max = sarr[j];
                 sarr[j] = sarr[j+1];
                 sarr[j+1] = max;
                } 
            }
        }
     schet++;
    }
}
    
  int main() {
  int n;
  cout << "Введите количество элементов массива: ";
  cin >> n;
  int* sarr;
  sarr = new int[n];
  
  cout << "Введите элементы массива: " << endl;
  for (int i = 0; i < n; i++) {
       cin >> sarr[i];
    }
  sortirovka(n, sarr);
  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; i++)
  cout << sarr[i] << ' ';
}
