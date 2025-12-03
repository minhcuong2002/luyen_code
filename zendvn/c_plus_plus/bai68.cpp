// kiem tra mang tang dan

#include <iostream>
using namespace std;

// kiem tra mang tang dan
bool isIncrease(int a[], int size){
    for(int i = 0; i < size - 1; i++){
        if(a[i] > a[i + 1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int a[] = {-3, -1, 5, 34};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc mang
    if(isIncrease(a, size)){
        cout << "Tang dan\n";
    }
    else{
        cout << "Khong tang dan\n";
    }
    return 0;
}