// thap hop 2 nua tam giac doi xung nghich

#include <iostream>
#include <string>
using namespace std;

// cach 1
void solution1(int n){
    for(int i = n; i >= 1; i--){
        cout << string(n - i, '=') << string(i, '+') << endl;
    }
}

// cach 2
void solution2(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n - i; j++){
            cout << '=';
        }
        for(int j = 0; j < i; j++){
            cout << '+';
        }
        cout << endl;
    }
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution 1:\n"; solution1(n);
    cout << endl;
    cout << "solution 2:\n"; solution2(n);
    return 0;
}