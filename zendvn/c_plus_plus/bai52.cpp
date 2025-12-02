// thap hinh hop rong

#include <iostream>

using namespace std;

void Solution(int n){
    for(int i = 1; i <= n; i++) 
        cout << i;
    cout << endl;

    for(int i = 2; i < n; i++){
        cout << i;            
        for(int j = 0; j < n - 2; j++)
            cout << ' '; 
        cout << i + n - 1 << endl; 
    }

    for(int i = n; i < 2*n; i++)
        cout << i;
    cout << endl;
}

int main(){
    int n = 5;

    cout << "Solution:\n";
    Solution(n);
    
    return 0;
}