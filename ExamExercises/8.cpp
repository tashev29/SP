//Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка 
//Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
double pecati(int arr[], int n, int i){
    if(i==n-1)
        return arr[i];
    return arr[i]+(1/pecati(arr, n, i+1));
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n;i++)
        cin>>arr[i];
    double suma = pecati(arr, n, 0);
    cout<<suma;
return 0;
}
