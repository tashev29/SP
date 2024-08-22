//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. 
//Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. 
//Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int n, m, suma;
    cin >> n >> m;
    int matrica[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int k;
    double as;
    int niza[m];
    int br = 0;
    for(int i = 0; i < n; i++) {
        suma=0;
        for(int j = 0; j < m; j++) {
            suma+=matrica[i][j];
        }
        as=(double)suma/m;
        k=0;
        double maks = fabs(as-matrica[i][0]);
        for(int j = 0; j<m; j++){
            if(fabs(as-matrica[i][j])>maks) {
                maks = fabs(as - matrica[i][j]);
                k=j;
            }
        }
        niza[br++] = matrica[i][k];
    }
    for(int i = 0; i<br; i++)
        cout<<niza[i]<<" ";
        return 0;
}
