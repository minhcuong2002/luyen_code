// dem so chu so

#include <iostream>

using namespace std;

int countDigits(int n){
    int cnt = 0;
    while(n != 0){
        n /= 10;
        ++cnt;
    }
    return cnt;
}

int main(){
    int number = 40000000;
    cout << "Total: " << countDigits(number) << " digits\n";
    return 0;
}