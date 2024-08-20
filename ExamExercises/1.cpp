//Се внесуваат низи од значи од стандарден влез.
//Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
//Појавата на големи и мали букви да се игнорира.
//Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
//Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
//Читањето завршува кога ќе се прочита знакот #.

#include <iostream>
#include <cstring>
using namespace std;
bool samoglaska(char a){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            return true;
        return false;
    }
    int main() {
        char str[1001];
        int brojac=0;
        int suma = 0;
        int i;
        while(cin.getline(str, 1001)){
            if(str[0]=='#')
                break;
            for(i=0; i<strlen(str); i++){
                if(samoglaska(tolower(str[i]))&& samoglaska(tolower(str[i+1]))){
                    brojac++;
                    cout<<(char)tolower(str[i])<<(char)tolower(str[i+1])<<endl;
                }
            }
        }
        cout<<brojac;
        return 0;
    }
