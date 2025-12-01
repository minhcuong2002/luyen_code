// f(n) = n^2 + n^4 + ... + n^2n

#include <iostream>
#include <cmath>

using namespace std;

long long sum(int n){
    if(n == 1) return 1;
    return pow(n, 2 * n) + sum(n - 1);
}

string buildString(int n){
    if(n == 1) return "1^2";
    return buildString(n - 1) + " + " + to_string(n) + "^" + to_string(2 * n);
}

void sumOfNumbers(int n){
    string form = buildString(n);
    long long res = sum(n);
    cout << form << " = " << res << endl;
}

int main(){
    int n = 6;
    sumOfNumbers(n);
    return 0;
}