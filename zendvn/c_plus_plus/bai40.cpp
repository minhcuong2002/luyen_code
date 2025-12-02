// thap hop 2 nua tam giac doi xung nghich

#include <iostream>
#include <string>

using namespace std;

void Solution1(int n){
    for(int i = n; i >= 1; i--){
        cout << string(n - i, '=') << string(i, '+') << endl;
    }
}

void Solution2(int n){
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
    int n = 7;

    cout << "Solutions 1:\n";
    Solution1(n);
    
    cout << endl;
    
    cout << "Solution 2:\n";
    Solution2(n);
    
    return 0;
}