// thap hinh hop chua tam giac so tang dan

#include <iostream>
#include <string>

using namespace std;

void Solution1(int n){
    for(int i = 1; i <= n; i++){
        char digit = '0' + i;

        cout 
            << string(n - i, '#') 
            << string(2 * i - 1, digit)
            << string(n - i, '#')
            << "\n";
    }
}

void Solution2(int n){
    for(int i = 1; i <= n; i++){
        char digit = '0' + i;

        for(int j = 0; j < n - i; j++){
            cout << "#";
        }

        for(int j = 0; j < 2 * i - 1; j++){
            cout << digit;
        }

        for(int j = 0; j < n - i; j++){
            cout << "#";
        }

        cout << "\n";
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