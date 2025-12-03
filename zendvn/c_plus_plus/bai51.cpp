// thap hinh so tang dan

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    for(int i = 1; i <= n; i++){
        int x = i;
        for(int k = 0; k < 3; k++){
            cout << x;
            if(k < 2) cout << ' ';
            x += 2;
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