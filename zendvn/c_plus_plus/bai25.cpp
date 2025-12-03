// f(n) = 1^2 + 2^2 + ... + n^2

#include <iostream>
using namespace std;

// tinh tong
int sumSquares(int n){
    return n * (n + 1) * (2*n + 1) / 6; // cong thuc tinh tong so luy thua 2 tu 1 den n
}


string buildString(int n){
    if(n == 1) return "1^2";
    return buildString(n - 1) + " + " + to_string(n) + "^2";
}

void sumOfNumbers(int n){
    string form = buildString(n);
    int res = sumSquares(n);
    cout << form << " = " << res << endl;
}

int main(){
    int n = 7;
    sumOfNumbers(n);
    return 0;
}