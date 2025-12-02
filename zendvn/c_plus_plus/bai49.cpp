// thap hinh hop chua tam giac so doi xung

#include <iostream>

using namespace std;

void Solution(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << '#';
        }
        for(int k = i; k >= 1; k--){
            cout << k;
        }
        for(int p = 2; p <= i; p++){
            cout << p;
        }
        for(int q = 1; q <= n - i; q++){
            cout << '#';
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