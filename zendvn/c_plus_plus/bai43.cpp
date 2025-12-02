// thap hinh mu

#include <iostream>
#include <string>

using namespace std;

void Solution1(int n){
    for(int i = 1; i <= n; i++){
        cout << string(n - i, ' ');
        if(i == 1){
            cout << i << endl;
        }
        else{
            cout << i;
            cout << string(2 * i - 3, ' ');
            cout << i << endl;
        }
    }        
}

void Solution2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << ' ';
        }
        if(i == 1){
            cout << i << endl;
        }
        else{
            cout << i;
            for(int j = 0; j < 2*i - 3; j++){
                cout << ' ';
            }
            cout << i << endl;
        }
    }    
}

int main(){
    int n = 5;

    cout << "Solutions 1:\n";
    Solution1(n);
    
    cout << endl;
    
    cout << "Solution 2:\n";
    Solution2(n);
    
    return 0;
}