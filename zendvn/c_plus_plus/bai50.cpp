// thap hinh tam giac vuong 2 chu so

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    int start = 1, end = 1;
    string shape = "";
    for(int i = 1; i <= n; i++){
        string record = "";
        for(int j = start; j <= end; j++){
            string num = j >= 10 ? to_string(j) : "0" + to_string(j);
            record += num + ' ';
        }
        shape += record + "\n";
        start = end + 1;
        end = start + i;
    }
    cout << shape << endl;
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution:\n";
    solution(n);
    return 0;
}