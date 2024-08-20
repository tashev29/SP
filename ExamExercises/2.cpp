//На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во истиот ред. 
//Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. 
//Читањето на броеви завршува кога ќе се прочита бројот 0.
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int getMostSignificantDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}
int main() {
    int n;
    
    while (cin >> n && n != 0) {
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        int maxDigit = -1;
        int resultNumber = -1;
        for (int num : numbers) {
            int digit = getMostSignificantDigit(num);
            if (digit > maxDigit) {
                maxDigit = digit;
                resultNumber = num;
            }
        }
        cout << resultNumber << endl;
    }
    return 0;
}
