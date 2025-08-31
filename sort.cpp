#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> m;
        a[i] = m;
    }
    for(int i = 1; i < n; i++){
        int j = i - 1;
        while(j >= 0 && a[j] > a[j + 1]){
            swap(a[j + 1], a[j]);
            j -= 1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}