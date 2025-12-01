// so tien (cac chu so trong day so tang dan)

#include <iostream>

using namespace std;

bool isAscendingDigits(int n){
    int lastDigtis = n % 10;
    int newN = n / 10;
    while(newN != 0){
        int currentDigits = newN % 10;
        if(currentDigits > lastDigtis){
            return false;
        }
        lastDigtis = currentDigits;
        newN /= 10;
    }
    return true;
}

int main(){
    int number = 279;
    if(isAscendingDigits(number)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}