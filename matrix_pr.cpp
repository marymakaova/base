#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m ,p;
    //n - строки A; m - общее число столбцов в А и строк в В; p - столбцы B
    cin >> n >> m >> p;
    vector<vector<int> > a(n, vector<int> (m));
    vector<vector<int> > b(m, vector<int> (p));
    vector<vector<int> > c(n, vector<int> (p));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    //кол-во строк в А:
    for(int i = 0; i < n; i++){
        //строки = столбцы (общий цикл, где j - кол-во строк в А и j - кол-во столбцов в B):
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            //кол-во столбцов в В:
            for(int k = 0; k < m; k++){
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    //вывод:
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

