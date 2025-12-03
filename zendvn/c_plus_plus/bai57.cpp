// thap hinh tam giac dang duong cheo so

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    string shape = "", space = " ";
    for(int i = 1; i <= n; i++){
        string record = "";
        for(int j = 1; j <= n; j++){
            if(j == i || j == n - i + 1){
                record += to_string(j);
            }
            else{
                record += space;
            }   
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