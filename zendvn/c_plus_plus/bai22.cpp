// so tien (cac chu so trong day so tang dan)

#include <iostream>
using namespace std;

// kiem tra cac so tien
bool isAscendingDigits(int n){
    int lastDigtis = n % 10; // so cuoi cung
    int newN = n / 10; // bo so cuoi cung
    while(newN != 0){
        int currentDigits = newN % 10; // bo di so cuoi cung cua newN
        if(currentDigits > lastDigtis){ // neu so truoc > so sau
            return false;
        }
        lastDigtis = currentDigits; // cap nhat lai so cuoi
        newN /= 10; // cap nhat lai newN
    }
    return true;
}

int main(){
    int number = 279;
    if(isAscendingDigits(number)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}