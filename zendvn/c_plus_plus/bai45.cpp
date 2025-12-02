// thap hinh tam giac do nguoc phai

#include <iostream>

using namespace std;

void Solution(int n){
    string shape = "";
    for(int i = 1; i <= n; i++){
        string record = "";
        for(int j = i; j <= n; j++){
            record += to_string(j);
        }
        shape += record + "\n";
    }
    cout << shape << endl;
}

int main(){
    int n = 5;
    
    cout << "Solution:\n";
    Solution(n);
    
    return 0;
}