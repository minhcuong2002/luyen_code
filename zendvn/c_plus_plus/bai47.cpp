// thap hinh tam giac vuong pai

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << ' ';
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution:\n";
    solution(n);
    return 0;
}