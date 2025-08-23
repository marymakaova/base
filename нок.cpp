#include <iostream>
#include <vector>

using namespace std;
int f(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return f(b, a % b);
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        swap(a, b);
        cout << f(a, b);
    }
    else if(b == 0 && a == 0){
        cout << "null";
        return 0;
    }
    else{
        int p = a * b;
        cout << p / f(a, b);
    }
    return 0;
}