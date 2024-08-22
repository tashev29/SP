//Од стандарден влез се читаат непознат број на редови додека не се прочита 0. 
//Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. 
//Доколку има повеќе такви редови се печати последниот.
//Се претпоставува дека ниту еден ред не е подолг од 100 знаци.
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    char str[101];
    int poz1, poz2, maxPoz1, maxPoz2;
    char strMax[101];
    int length, maxLength=0, br;
    int k=0;
    while(cin.getline(str, 101)){
        if (strcmp(str, "0") == 0) {
            break;
        }
        br=poz1=poz2=0;
        length=(int)strlen(str);
        bool flag = false;
        for(int i = 0; i<strlen(str); i++){
            if(str[i]>='0'&&str[i]<='9'){
                if(poz1==0&&!flag) {
                    poz1 = i;
                    flag = true;
                }
                br++;
                if(br>=2)
                    break;
            }
        }
        for(int i = strlen(str)-1; i>=0; i--){
            if(str[i]>='0'&&str[i]<='9'){
                poz2=i;
                break;
            }
        }
        if(length>=maxLength&&poz2!=0) {
            maxLength = length;
            maxPoz1 = poz1;
            maxPoz2 = poz2;
            strcpy(strMax, str);
        }
    }
    for(int i = maxPoz1; i<=maxPoz2;i++)
        cout<<strMax[i];
        return 0;
}
