//алгоритм перевода из десятичной с-мы в любую:
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, base;
    cin >> n;
    cin >> base;
    string res = "";
    while (n > 0) {
        char a;
        if (n % base < 10) {
            a = 48 + (n % base);
        }
        if (n % base == 10) {
            a = 'A';
        }
        if (n % base == 11) {
            a = 'B';
        }
        if (n % base == 12) {
            a = 'C';
        }
        if (n % base == 13) {
            a = 'D';
        }
        if (n % base == 14) {
            a = 'E';
        }
        if (n % base == 15) {
            a = 'F';
        }
        //и так далее
        res = a + res;
        n /= base;
        cout << res;
        }
}
