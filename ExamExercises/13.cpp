//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви). 
//Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int main()
{
    int n, m, x;
    cin >> x >> n >> m;
    int matrica[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cin >> matrica[i][j];
    }
    int suma;
    for(int i = 0; i < n; i++) {
        suma=0;
        for(int j = 0; j < m; j++)
        {
            suma+=matrica[i][j];
        }
        if(suma>x){
            for(int k = 0; k<m; k++)
                matrica[i][k]=1;
        }
        else if(suma<x){
            for(int k = 0; k<m; k++)
                matrica[i][k]=-1;
        }
        else{
            for(int k = 0; k<m; k++)
                matrica[i][k]=0;
            }
        }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            cout<<matrica[i][j]<<" ";
        cout<<endl;
    }
}
