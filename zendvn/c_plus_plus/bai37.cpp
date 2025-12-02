// thap hinh tam giac co ban

#include <iostream>
#include <string>

using namespace std;

void solution1(int n){
    for(int i = 1; i <= n; i++){
        cout << string(i, '*') << "\n";
    }
}

void solution2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << "\n";
    }
}

int main(){
    int n = 5;
    cout << "Solution 1:\n"; 
    solution1(n);
    
    cout << endl;

    cout << "Solution 2:\n"; 
    solution2(n);
    
    return 0;
}