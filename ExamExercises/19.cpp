//Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:
//N - бројот на низи од знаци кои ќе се читаат и
//X - поместување.
//Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). 
//Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
//Трансформацијата да се имплементира со посебна рекурзивна функција.
//Пример:
//Welcome -> трансформирано со поместување 5 -> Bjqhtrj
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
void transform(char arr[], int pomestuvanja, int i){
    int length = strlen(arr);
    if(i==length)
        return;
    if(isalpha(arr[i])){
        if (arr[i] + pomestuvanja > 'z') {
            arr[i] = 'a' + (arr[i] + pomestuvanja - 'z' - 1);
        } else if (arr[i] + pomestuvanja > 'Z' && arr[i] <= 'Z') {
            arr[i] = 'A' + (arr[i] + pomestuvanja - 'Z' - 1);
        } else {
            arr[i] = arr[i] + pomestuvanja;
        }
        return transform(arr, pomestuvanja, ++i);
    }
    else
        return transform(arr, pomestuvanja, ++i);

}
int main() {
    int n;
    cin >> n;
    int x;
    cin>>x;
    cin.get();
    char str[81];
    for(int i = 0; i<n; i++){
        cin.getline(str, 81);
        transform(str, x, 0);
        cout<<str<<endl;
}
return 0;
}
