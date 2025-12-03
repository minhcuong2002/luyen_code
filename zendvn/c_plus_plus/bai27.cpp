// f(n) = 1 + 1x2 + ... + 1x2x...xn

#include <iostream>
using namespace std;

// tinh giai thua tu 1 den n (de quy)
int fact(int n){
    if(n == 1) return 1;
    return n * fact(n - 1);
}

// tinh tong (de quy)
int sum(int n){
    if(n == 1) return 1;
    return fact(n) + sum(n - 1);
}

// xay dung form
string buildTerm(int n){
    if(n == 1) return "1";
    return buildTerm(n - 1) + "x" + to_string(n);
}

// xay dung form
string buildString(int n){
    if(n == 1) return "1";
    return buildString(n - 1) + " + " + buildTerm(n);
}

int main(){
    int n = 5;
    cout << buildString(n) << " = " << sum(n) << endl;
    return 0;
}