// tong n + nn + nnn

#include <iostream>
using namespace std;

// tong
int sum(int n){
    int nn = n * 11; // x2 so cua n
    int nnn = n * 111; // x3 so cua n
    cout << n << " + " << nn << " + " << nnn << " = ";
    return n + nn + nnn;
}

int main(){
    int n = 1;
    cout << sum(n) << endl;
    return 0;
}