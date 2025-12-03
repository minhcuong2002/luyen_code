// so nguyen to

#include <iostream>
#include <cmath>
using namespace std;

// kiem tra so nguyen to
bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) // kiem ra tu 2 den can bac 2 cua n
        if(n % i == 0) return false; // ton tai so ma n chi het -> n khong phai so nguyen to
    return true;
}

int main(){
    int number = 6;
    if(isPrime(number)) cout << "So nguyen to\n";
    else cout << "Khong la so nguyen to\n";
    return 0;
}