//За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви). Нека X e збирот од елементите под главната дијагонала во матрицата А. Нека Y е збирот од елементите под споредната дијагонала во матрицата А. Да се креира нова матрица B на следниот начин:
//сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
//сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
//ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
//сите останати елементи во матрицата B имаат вредност 0
//Новата матрица B да се испечати на стандарден излез.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double matrica[n][n];
    double b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrica[i][j];
            b[i][j]=0;
        }
    }
    double sumaGlavna=0, sumaSporedna=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i>j)
                sumaGlavna+=matrica[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             if(i+j>n-1)
                sumaSporedna+=matrica[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==j) {
                b[i][j] = sumaGlavna;
                if(n%2) {
                    if (i == n / 2 && j == n / 2)
                        b[i][j] = sumaGlavna + sumaSporedna;
                }
            }
            else if(i+j==n-1)
                b[i][j]=sumaSporedna;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout<< b[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
