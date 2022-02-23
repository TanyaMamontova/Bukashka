#include <iostream>

using namespace std;

int perevert(int start) {
     int obr = 0;
     int a;
    while (start > 0) {
        a = start % 10;
        start = start / 10;
        obr = obr*10 + a;
    }
    return obr;
}

int main() {
int start;
int a;
int obr = 0;
cin >> start;
cout << perevert(start) << endl;
return 0;
}
