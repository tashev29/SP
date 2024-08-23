//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). 
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и
//2 * N колони ќе се добие матрица со 2 * N редици x N колони.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 2 * n;
    int matrica[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int b[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = matrica[i][j];
        }
    }
        for (int i = 0; i<n; i++){
            for(int j=n; j<m;j++)
                b[n+i][j-n]=matrica[i][j];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cout << b[i][j] << " ";
            cout << endl;
        }
        return 0;
    }
