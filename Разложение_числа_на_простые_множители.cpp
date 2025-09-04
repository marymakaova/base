//Разолжение числа на его простые множители со степеней
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int len = (int) sqrt(n) + 1;
    vector<int> delitels;
    if(n <= 1){
        cout << n;
        return 0;
    }
    for(int i = 2; i < len; i++){
        while(n > 1 && n % i == 0){
            n /= i;
            delitels.push_back(i);
        }
        if(n == 1){
            break;
        }
    }
    //проверка, осталось ли простое число после корня:
    if(n != 1){
        delitels.push_back(n);
    }
    //если нет делителей (пустой список), то число простое
    if (delitels.empty()) {
        cout << n << endl;
        return 0;
    }

    int a = delitels[0];
    int s = 1;
    // Выводим первый делитель
    cout << a;
    for (size_t i = 1; i < delitels.size(); i++) {
        if(a == delitels[i]){
            s++;
        }
        else{
            if(s > 1){
                cout << '^' << s;
            }
            //выводим * только если элемент не последний
            if(i < delitels.size()){
                cout << '*';
            }
            //когда a != delitels[i] меняем значение а:
            a = delitels[i];
            //выводим a:
            cout << a;
            //присваиваем 1 s:
            s = 1;
        }
    }
    // Обработка последнего делителя
    if(s > 1){
        cout << '^' << s << endl;
    } 

    return 0;
}