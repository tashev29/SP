//Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
//Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата. 
//Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.
#include <iostream>
#include <cstring>
using namespace std;
int sum_pos(int *arr, int ind, int n){
    int suma = 0;
    for(int i = ind; i<n; i++){
        suma+=*(arr+i);
    }
    return suma;
}
int main() {
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0; i<n; i++)
 cin>>arr[i];
 int ind;
 cin>>ind;
 int suma=sum_pos(arr, ind, n);
 cout<<suma;
return 0;
}
