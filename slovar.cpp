#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Wek {
    string str;
    int n;
    Wek(string str) : str(str) , n(1) {};
    bool operator<(Wek ob) {
        return this->n > ob.n;
    }
};

int main() {
    fstream open("input.txt", ios::in | ios::binary);
    vector<Wek> arr;
    vector<string> jessi;
    string str;
    while (!open.eof()) {
       open>>str;
       int left = 0;
       for (int i =0; i < str.size(); ++i){
             if (str[i] == '\'' || str[i] == '.') {jessi.push_back(str.substr(left, i - left + 1)); left = i + 1;}
       }
       jessi.push_back(str.substr(left, str.size() - left));
    }
    int count = 0;
    while (count < jessi.size()){
        str = jessi[count];
        bool tmp = true;
        int pos;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i].str == str) { tmp = false; pos = i; break; }
        }
        if (tmp) arr.push_back(Wek(str));
        else arr[pos].n++;
        count++;
    }
    sort(arr.begin(), arr.end());
    fstream out("out.txt", ios::out | ios::binary);
    for (auto& c : arr) {
        if (c.n > 1) out << c.str << " [" << c.n << "]\n";
    }
    open.close();
    out.close();
    return 0;
}
