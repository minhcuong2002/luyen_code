// tong n + nn + nnn

#include <iostream>

using namespace std;

int sum(int n){
    int nn = n * 11;
    int nnn = n * 111;
    cout << n << " + " << nn << " + " << nnn << " = ";
    return n + nn + nnn;
}

int main(){
    int n = 1;
    cout << sum(n) << endl;
    return 0;
}