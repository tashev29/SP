//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int matrica[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int brojac = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m - 2; j++) {
            if(matrica[i][j] == 1 && matrica[i][j + 1] == 1 && matrica[i][j + 2] == 1) {
                brojac++;
                break;
            }
        }
    }
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n - 2; i++) {
            if(matrica[i][j] == 1 && matrica[i + 1][j] == 1 && matrica[i + 2][j] == 1) {
                brojac++;
                break;
            }
        }
    }

    cout << brojac;

    return 0;
}
