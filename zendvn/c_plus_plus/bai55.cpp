// thap hinh dong ho cat

#include <iostream>
using namespace std;

// ket qua
void printBoxX(int n) {
    if(n < 3 || n % 2 == 0){
        cout << "Chiều cao phải là số lẻ và >= 3!" << endl;
        return;
    }
    string character = "#";
    string space = " ";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // Dấu # ở dòng đầu/dòng cuối hoặc 2 đường chéo
            if(i == 1 || i == n || j == i || j == n - i + 1)
                cout << character;
            else
                cout << space;
        }
        cout << endl;
    }
}

int main() {
    int n = 7; // chiều cao hình thoi
    cout << "Solution:\n";
    printBoxX(n);
    return 0;
}
