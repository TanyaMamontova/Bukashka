#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct Wek {
    string str;
    int n;
    Wek(string str) : str(str) {};
    bool operator<(Wek ob) {
        return this->n > ob.n;
    }
};
int main() {
    fstream open("input.txt", ios::in | ios::binary);
    vector<Wek> arr;
    string str;
    while (!open.eof()) {
        open >> str;
        bool tmp = true;
        int pos;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i].str == str) { tmp = false; pos = i; break; }
        }
        if (tmp) arr.push_back(Wek(str));
        else arr[pos].n++;
    }
    sort(arr.begin(), arr.end());
    fstream out("out.txt", ios::out | ios::binary);
    for (auto& c : arr) {
        out << c.str << " [" << c.n << "]\n";
    }
    open.close();
    out.close();
    return 0;
}
