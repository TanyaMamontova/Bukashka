#include <iostream>

using namespace std;

void sortirovka(int size, int* sarr){
 int schet = 0;
 int max;
 //max = sarr[0];
 while (schet < size){
     
     for (int j = 1; j < size-1; j++){
         if (sarr[j] > sarr[j+1]){
             max = sarr[j];
             sarr[j] = sarr[j+1];
             sarr[j+1] = max;
            } 
        }

     schet++;
   }
}
    
 
  int main()
{
  int n;
  cout << "Введите количество элементов массива: ";
  cin >> n;
  int* sarr;
  sarr = new int[n];
  
  cout << "Введите элементы массива: " << endl;
  for (int i = 0; i < n; i++){
       cin >> sarr[i];
    }
  sortirovka(n, sarr);
  cout << "Отсортированный массив: ";
  for (int i = 0; i < n; i++)
  cout << sarr[i] << ' ';
}
