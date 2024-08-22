//Од стандарден влез се чита ливче во спортска обложувалница.
//Во првиот ред е запишана сумата на уплата (цел број).
//Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат: ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент,да се испечати првиот.
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
int suma;
char sifra[10], maksSifra[10];
char tip, maksTip;
double koef, maxKoef;
double maxDobivka = 1.0;
int brojTipovi=0;
cin>>suma;
maxDobivka*=(double)suma;
while(true){
    cin>>sifra;
    if(sifra[0]=='#')
        break;
    brojTipovi++;
    cin>>tip;
    cin>>koef;
    if(brojTipovi==1) {
        maxKoef = koef;
        maksTip = tip;
        strcpy(maksSifra, sifra);
    }
    else if(koef>maxKoef){
        maksTip=tip;
        maxKoef=koef;
        strcpy(maksSifra, sifra);
    }
    maxDobivka*=koef;
}
cout<<maksSifra<<" "<<maksTip<<" "<<maxKoef<<endl;
cout<<maxDobivka<<endl;
return 0;
}
