// f(n) = n * ... * 2 * 1

#include <iostream>
using namespace std;

// tinh tich (de quy)
int multiply(int n){
    if(n <= 1) return 1;
    return n * multiply(n - 1);
}

// xay dung form
string buildString(int n){
    if(n == 1) return "1";
    return buildString(n - 1) + " x " + to_string(n);
}

// ket qua
void multiflyOfNumbers(int n){
    string form = buildString(n);
    int res = multiply(n);
    cout << form << " = " << res << endl;
}

int main(){
    int n = 7;
    multiflyOfNumbers(n);
    return 0;
}