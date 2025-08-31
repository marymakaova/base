//базовые операции со строками в одном месте (с нуля). полный гайд
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
     //cоздание строки:
     string str1 = "Привет, мир!"; //Инициализация строковым литералом
     string str2("Другая строка");  //Инициализация с использованием конструктора
     string str3;                   // пустая строка (можно str3 = "")
 
     //ввод строки с клавиатуры:
     cout << "Введите строку: ";
     getline(std::cin, str3); //Читает строку целиком, включая пробелы
 
     //вывод строки:
     cout << "Вы ввели: " << str3;
 
     //длина строки:
     cout << "Длина строки str1: " << str1.length();  //или str1.size()
 
     //доступ к символам:
     cout << "Первый символ str1: " << str1[0] << std::endl;
     cout << "Последний символ str1: " << str1[str1.length() - 1] << std::endl;
     //Важно! Обращение за пределы строки (например, str1[str1.length()]) вызовет ошибку.  Лучше использовать at() для безопасного доступа.
 
     //конкатенация (объединение) строк:
     std::string str4 = str1 + " " + str2; //сложение строк
     std::cout << "Объединенная строка: " << str4;
     str1 += "!!!"; //добавление к существующей строке
     cout << "str1 после добавления: " << str1;
 
     //cравнение строк:
     if(str1 == str2){
         cout << "Строки равны";
     } 
     else {
         cout << "Строки не равны";
     }
     if (str1 < str2) {  //лексикографическое сравнение (как в словаре)
        cout << "str1 меньше str2";
     }
 
     //подстроки:
     string sub = str4.substr(7, 5); //извлекает подстроку, начиная с позиции 7, длиной 5 символов
     cout << "Подстрока str4: " << sub;
 
     //поиск подстроки:
     size_t pos = str4.find("мир"); //находит первое вхождение подстроки "мир"
     if (pos != std::string::npos) { //std::string::npos означает, что подстрока не найдена
         cout << "Подстрока 'мир' найдена в позиции: " << pos;
     } 
     else{
         cout << "Подстрока 'мир' не найдена";
     }
 
     //замена подстроки:
     str4.replace(7, 5, "планета"); //заменяет 5 символов, начиная с позиции 7, на "планета"
     cout << "Строка str4 после замены: " << str4 << std::endl;
 
     //удаление символов:
     str4.erase(7, 7); //удаляет 7 символов, начиная с позиции 7
     cout << "Строка str4 после удаления: " << str4;

     str4.clear(); // Очищает строку (делает ее пустой)

    //поиск двух одинаковых букв:
    string str, x = "";
    getline(cin, str);
    for(int i = 0; i <= str.size() - 1; i++){
        for(int j = i + 1; j <= str.size() - 1; j++){
            if(str[i] == str[j]){
                cout << str[i];
                break;
            }
        }
    }

    //поикс строки палиндрома:
    string str, str2;
    getline(cin, str);
    for(int i = str.size() - 1; i >= 0; --i){
        str2 += str[i];
    }
    if(str == str2){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    //преобразование в регистр:
    char n;
    cin >> n;
    if(islower(n)){
        n = toupper(n);
        cout << n;
    }
    else{
        n = tolower(n);
        cout << n;
    }
    //количество слов в строке:
    string str;
    int cnt = 0;
    getline(cin, str);
    stringstream ss(str);
    while(ss >> str){
        ++cnt;
    }
    cout << cnt;
    //вставка символа (например #)
    string s, str = "";
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(i != s.size() - 1){
            str += s[i];
            str += '#'; //или любой другой
        }
        else{
            str += s[i];
        }
    }
    for(char& symb : str){
        cout << symb;
    }
    
    //востановление разделителя:
    string currName;
    vector<string> names;
    string result = "";
    for (int i = 0; i < names.size(); i++) {
        result += names[i];

        if (i == names.size() - 1) {
            result += '.';
        }
        else {
            result += ", ";
        }
    }

    //удаление разделителя:
    string input;
    getline(cin, input);
    for (char& symb : input) {
        if (symb == ',' || symb == '.') {
            names.push_back(currName);
            currName = "";
        }

        else if (symb != ' ') {
            currName += symb;
        }
    }
}