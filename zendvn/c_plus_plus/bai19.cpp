// dem so chu so

#include <iostream>
using namespace std;

// dem chu so
int countDigits(int n){
    int cnt = 0;
    while(n != 0){ // khi nao het chia duoc thi dung
        n /= 10; // bo di 1 chu so cuoi
        ++cnt;
    }
    return cnt;
}

int main(){
    int number = 40000000;
    cout << "Total: " << countDigits(number) << " digits\n";
    return 0;
}