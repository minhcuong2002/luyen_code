// thap hinh chu Z

#include <iostream>
using namespace std;

// ket qua
void solution(int n){
    // dòng đầu
    for(int i = 0; i < n; i++) cout << '#';
    cout << endl;
    // các dòng giữa
    for(int i = 1; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++) cout << ' '; // khoảng trắng
        cout << '#' << endl;
    }
    // dòng cuối
    for(int i = 0; i < n; i++) cout << '#';
    cout << endl;
}

int main(){
    int n = 5; // chieu cao tam giac
    cout << "solution:\n";
    solution(n);
    return 0;
}