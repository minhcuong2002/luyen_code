// so toan chan

#include <iostream>

using namespace std;

bool isAllEvenDigits(int n){
    while(n != 0){
        int digit = n % 10;
        if(digit % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int number = 208;
    if(isAllEvenDigits(number)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}