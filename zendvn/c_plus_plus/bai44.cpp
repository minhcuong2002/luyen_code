// thap hinh tam giac dang so

#include <iostream>
#include <string>

using namespace std;

void Solution1(int n){
    for(int i = 0; i <= n; i++){
        string s = "";
        for(int j = 1; j <= i; j ++){
            s += char('0' + j);
        }
        cout << s << endl;
    }
}

void Solution2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
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