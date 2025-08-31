//сортировка массива методом выбора:
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n, mx_i = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> m;
        a[i] = m;
    }
    for(int i = 0; i < n; i++){
        int mx_i = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[mx_i]){
            //по возрастанию - < по убыванию - >
                mx_i = j;
            }
        }
        if(mx_i != i){
            swap(a[i], a[mx_i]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}