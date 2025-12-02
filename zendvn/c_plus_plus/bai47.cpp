// thap hinh tam giac vuong pai

#include <iostream>
using namespace std;

void Solution(int n){
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
    int n = 5;

    cout << "Solution:\n";
    Solution(n);
    
    return 0;
}