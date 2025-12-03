// tong cac chu so

#include <iostream>
using namespace std;

// tong cac so trong chu so
void sumOfDigits(int n){
    int sum = 0;
    string res = "";
    while(n > 0){
        int last_digit = n % 10; // lay so cuoi cung
        n /= 10; // bo so cuoi cung
        sum += last_digit; // tinh tong cac so da lay ra
        string sign = (n > 0) ? " + " : "";
        res = sign + to_string(last_digit) + res;
    }
    cout << res << " = " << sum << "\n";
}

int main(){
    int number = 100;
    sumOfDigits(number);
    return 0;
}