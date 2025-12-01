// so nguyen to

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}

int main(){
    int number = 6;
    if(isPrime(number)) cout << "So nguyen to\n";
    else cout << "Khong la so nguyen to\n";
    return 0;
}