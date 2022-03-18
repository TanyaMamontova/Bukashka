#include <iostream>
#include <string>

using namespace std;

void wordsbeginA(){ //функция для нахождения слов в строке, начинающихся с 'А'
   string a;
   getline(cin,a,'\n');
   int pos = a.find('A'); // переменная, которая находит первый встречающийся символ 'А' в строке и возвращает номер этого символа
   while (pos != string::npos){ // цикл, который ищет слова, начинающиеся с 'А'
       if (pos == 0){ // первый if рассматривает случай, когда слово, начинающееся с 'А' находится в самом начале строки
           int numb = pos;
           while (a[numb] != ' ' && numb!=a.size() ) {cout<<a[numb]; numb++;}
           cout<<endl;
           pos = numb;
       }
       else {
           if (a[pos - 1] == ' '){ // второй if рассматривает случай, когда слово, начинающееся с 'А' находится в строке после пробела
               int numb = pos;
               while (a[numb] != ' ' && numb!=a.size() ) {cout<<a[numb]; numb++;}
               cout<<endl;
               pos = numb;
           }

       }
       pos = a.find('A', pos); // возвращает номер символа 'А', если его номер больше значения pos 
   }
}

int main(){
   cout << "Введите строку:"<<endl;
   wordsbeginA();
   return 0;
}
