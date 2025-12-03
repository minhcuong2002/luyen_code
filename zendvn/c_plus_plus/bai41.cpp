// thap hinh hop chua tam giac so tang dan

#include <iostream>
#include <string>
using namespace std;

// cach 1
void solution1(int n){
    for(int i = 1; i <= n; i++){
        char digit = '0' + i;
        cout 
            << string(n - i, '#') 
            << string(2 * i - 1, digit)
            << string(n - i, '#')
            << "\n";
    }
}

// cach 2
void solution2(int n){
    for(int i = 1; i <= n; i++){
        char digit = '0' + i;
        for(int j = 0; j < n - i; j++){
            cout << "#";
        }
        for(int j = 0; j < 2 * i - 1; j++){
            cout << digit;
        }
        for(int j = 0; j < n - i; j++){
            cout << "#";
        }
        cout << "\n";
    }
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution 1:\n"; solution1(n);
    cout << endl;
    cout << "solution 2:\n"; solution2(n);
    return 0;
}