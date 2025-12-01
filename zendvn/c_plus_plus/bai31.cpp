// xac dinh ton tai boi so

#include <iostream>

using namespace std;

bool check(int n, int a[], int i, int size){
    if(i == size) return false;
    if(a[i] % n == 0) return true;
    return check(n, a, i + 1, size);
}

int main(){
    int a[] = {14, 12, 3, 21, 6};
    int n = 3;
    int size = sizeof(a) / sizeof(a[0]);
    if(check(n, a, 0, size) && check(n + 1, a, 0, size)){
        cout << "Ton tai\n";
    }
    else cout << "Khong ton tai\n";
    return 0;
}