#include <iostream>

using namespace std;
int polozhitchislo (int x) {
 int schetchik = 0;
  if (x < 0) {
    schetchik++;
  }
  return schetchik;
}
int main () {
  int proverka = 0;
  int x;
  while (x!=0) {
    cin >> x;
    polozhitchislo(x);
    proverka = proverka + polozhitchislo(x);
  }
  if (proverka!=0)
    cout << " не все числа положительные " << endl;
  else cout << " все числа положительные " << endl;
}
