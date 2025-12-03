// thap hinh Slash

#include <iostream>
#include <string>
using namespace std;

// cach 1
void solution1(int n){
    for(int i = 1; i <= n; i++){
        cout << string(i - 1, ' ') << i << endl;
    }
}

// cach 2
void solution2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i - 1; j++){
            cout << ' ';
        }
        cout << i << endl;
    }
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution 1:\n"; solution1(n);
    cout << endl;
    cout << "solution 2:\n"; solution2(n);
    return 0;
}