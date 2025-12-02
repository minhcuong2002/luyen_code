// thap hinh tam giac can so doi xung

#include <iostream>

using namespace std;

void Solution(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << ' ';
        }
        for(int k = i; k >= 1; k--){
            cout << k;
        }
        for(int q = 2; q <= i; q++){
            cout << q;
        }
        cout << endl;
    }
}

int main(){
    int n = 5;

    cout << "Solution:\n";
    Solution(n);
    
    return 0;
}