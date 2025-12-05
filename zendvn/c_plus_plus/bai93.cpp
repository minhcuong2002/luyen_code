// tong cac chu so

#include <iostream>
using namespace std;

// tinh tong
int sum(int n){
    int sum = 0;
    while(n > 0){
        int lastNum = n % 10; // so cuoi
        sum += lastNum; // tong
        n /= 10; // bo di so cuoi
        if(n == 0 && sum >= 10){ // neu n == 0 va tong >= 2 (tong > 2 chu so)
            n = sum; // cap nhat lai n
            sum = 0; // cap nhat lai sum
        }
    }
    return sum;
}

int main(){
    int n = 92;
    cout << sum(n) << endl;
    return 0;
}