// tong cac chu so

#include <iostream>

using namespace std;

void sumOfDigits(int n){
    int sum = 0;
    string res = "";
    while(n > 0){
        int last_digit = n % 10;
        n /= 10;
        sum += last_digit;
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