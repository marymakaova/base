#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> sieve(n + 1, false);
    for(int i = 2; i*i < n; i++){
        if(!(sieve[i])){
            for(int j = i*i; j < n; j += i){
                sieve[j] = 1;
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(sieve[i] == 0){
            cout << i << " ";
        }
    }
}