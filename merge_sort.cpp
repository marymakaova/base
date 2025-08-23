#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> merge(const vector<int>& left, const vector<int>& right){
    vector<int> res;
    int i = 0;
    int j = 0;
    while((i < left.size()) && (j < right.size())){
        if(left[i] <= right[j]){
            res.push_back(left[i]);
            i++;
        }
        else{
            res.push_back(right[j]);
            j++;
        }
    }
    // Добавляем оставшиеся элементы из левого подмассива (если они есть)
    while (i < left.size()) {
        res.push_back(left[i]);
        i++;
    }
    // Добавляем оставшиеся элементы из правого подмассива (если они есть)
    while (j < right.size()) {
        res.push_back(right[j]);
        j++;
    }
    return res;
}
vector<int> merge_sort(const vector<int>& arr){
    //базовый случай
    if(arr.size() <= 1){
        return arr;
    }
    //разбиение на два подмассива
    int md = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + md);
    vector<int> right(arr.begin() + md, arr.end());
    //рекурсивный вызов
    vector<int> left_sort = merge_sort(left);
    vector<int> right_sort = merge_sort(right);
    //слияние
    return merge(left_sort, right_sort);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int& i : arr){
        cin >> i;
    }
    vector<int> result = merge_sort(arr);
    for(int& i : result){
        cout << i << " ";
    }
    return 0;
}