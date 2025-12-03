// xac dinh ton tai uoc so

#include <iostream>
using namespace std;

// kiem tra uoc so ton tai (de quy)
bool check(int n, int a[], int i, int size){
    if(i == size) return false;
    if(n % a[i] == 0) return true;
    return check(n, a, i + 1, size);
}

int main(){
    int a[] = {14, 12, 3, 5, 6}; // day so
    int n = 9; // kiem tra uoc cua n
    int size = sizeof(a) / sizeof(a[0]); // so luong phan tu trong day
    if(check(n, a, 0, size)) cout << "Ton tai\n";
    else cout << "Khong ton tai\n";
    return 0;
}