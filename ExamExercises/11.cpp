//Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. 
//Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void bubble(char arr[], int size){
    bool isswapped=true;
    while(isswapped){
        isswapped=false;
        for(int i = 0; i<size-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                isswapped=true;
            }
        }
    }
}
int main()
{
    char niza[101];
    char ascii[101];
    int br, brojac;
    while(cin.getline(niza, 101)){
        if(strcmp(niza, "#")==0)
            break;
        br=brojac=0;
        for(int i = 0; i<strlen(niza);i++){
            if(niza[i]>='0'&&niza[i]<='9') {
                br++;
                ascii[brojac]=niza[i];
                brojac++;
            }
        }
        cout<<br<<":";
        bubble(ascii, brojac);
        for(int i = 0; i<brojac;i++){
            cout<<ascii[i];
        }
        cout<<endl;

    }
}
