// thap hinh thoi

#include <iostream>

using namespace std;

void Solution(int n){
    int mid = (n + 1) / 2; // dòng giữa

    // tam giác lên
    for(int i = 1; i <= mid; i++){
        for(int j = 1; j <= mid - i; j++) cout << ' ';      // khoảng trắng trái
        for(int j = 1; j <= 2*i - 1; j++) cout << '*';      // dấu *
        cout << endl;
    }

    // tam giác xuống
    for(int i = mid - 1; i >= 1; i--){
        for(int j = 1; j <= mid - i; j++) cout << ' ';      // khoảng trắng trái
        for(int j = 1; j <= 2*i - 1; j++) cout << '*';      // dấu *
        cout << endl;
    }
}

int main(){
    int n = 7;

    cout << "Solution:\n";
    Solution(n);
    
    return 0;   
}