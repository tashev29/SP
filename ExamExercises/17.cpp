//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата. 
//Ако матрицата има парен број колони, се менува вредноста на средните два елемента. 
//Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n>> m;
    int matrica[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int sumaPrva, sumaVtora;
    if(!(m%2)) {
        for (int i = 0; i < n; i++) {
            sumaPrva = sumaVtora = 0;
            for (int j = 0; j < m; j++) {
                if (j < m / 2)
                    sumaPrva += matrica[i][j];
                else
                    sumaVtora += matrica[i][j];
            }
            matrica[i][m / 2 - 1] = abs(sumaPrva - sumaVtora);
            matrica[i][m / 2] = abs(sumaPrva - sumaVtora);
        }
    }
    else{
            for (int i = 0; i < n; i++) {
                sumaPrva = sumaVtora = 0;
                for (int j = 0; j < m; j++) {

                        if (j <= m / 2)
                            sumaPrva += matrica[i][j];
                        else
                            sumaVtora += matrica[i][j];
                    }
                sumaVtora += matrica[i][m / 2];
                matrica[i][m / 2] = abs(sumaPrva - sumaVtora);
                }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout<< matrica[i][j]<<" ";
        cout<<endl;
    }
return 0;
}
