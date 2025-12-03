// f(n) = 1 + 2 + ... + n

#include <iostream>
using namespace std;

// tinh tong (de quy)
int sum(int n){
    if(n == 1) return 1;
    return n + sum(n - 1); // hoac cong thuc: (n * (n-1)) / 2
}

// xay dung form
string buildString(int n){
    if(n == 1) return "1";
    return buildString(n - 1) + " + " + to_string(n);
}

// ket qua
void sumOfNumbers(int n){
    string form = buildString(n);
    int sumNums = sum(n);
    cout << form << " = " << sumNums << endl;
}

int main(){
    int number = 5;
    sumOfNumbers(number);
    return 0;
}