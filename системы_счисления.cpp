//Перевод из любой с-мы в десятичную:
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string k;
    int base;
    getline(cin, k);
    cin >> base;
    int n = 0;
    int len = k.size();
    for (int i = 0; i < len; i++) {
        n += (k[i] - 48) * pow(base, len - i - 1);
    }
    cout << n;

    return 0;
}
