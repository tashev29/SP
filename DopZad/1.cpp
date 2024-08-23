//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. 
//Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. 
//Ако нема такви низи, се печати "Nema!". 
//Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool hasSpecialChar(const string& str) {
    for (char c : str) {
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}
int main() {
    int N;
    cin >> N;

    string longestPalindrome = "Nema!";

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;

        if (input.length() > longestPalindrome.length() && isPalindrome(input) && hasSpecialChar(input)) {
            longestPalindrome = input;
        }
    }
    cout << longestPalindrome << endl;
    return 0;
}
