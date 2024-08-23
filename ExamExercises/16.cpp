//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int maksCifra(int n){
    if(n<10)
        return n;
    int cifra = n%10;
    int maksOstatokOdBroj = maksCifra(n/10);
    if(cifra>maksOstatokOdBroj)
        return cifra;
    else
        return maksOstatokOdBroj;

}
int main(){
    int n;
    while(cin>>n){
        cout<<maksCifra(n)<<endl;
}
    return 0;
}
