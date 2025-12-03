// so toan chan

#include <iostream>
using namespace std;

// kiem tra cac so chan
bool isAllEvenDigits(int n){
    while(n != 0){
        int digit = n % 10; // lay so cuoi cung
        if(digit % 2 != 0) return false; // kiem tra so chan le
        n /= 10; // bo so cuoi cung
    }
    return true;
}

int main(){
    int number = 208;
    if(isAllEvenDigits(number)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}