// tham hinh tam giac do nguoc

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    string shape = "";
    for(int i = n; i >= 1 ;i--){
        string record = "";
        for(int j = i; j <= n; j++){
            record += ' ';
        }
        for(int j = 1; j <= i; j++){
            record += to_string(j);
        }
        shape += record + "\n";
    }
    cout << shape << endl;
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution:\n";
    solution(n);
    return 0;
}