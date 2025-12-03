// tham hop 2 nua tham giac doi xung

#include <iostream>
#include <string>
using namespace std;

// cach 1
void solution1(int n){
    for(int i = n - 1; i >= 0; i--){
        cout << string(i, '=') << string(n - i, '+') << endl;
    }
}

// cach 2
void solution2(int n){
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            cout << '=';
        }
        for(int j = 0; j < n - i; j++){
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