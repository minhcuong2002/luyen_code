// phan tu ton tai trong mang

#include <iostream>

using namespace std;

bool find(int a[], int size, int x){
    for(int i = 0; i < size; i++){
        if(a[i] == x){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int a[] = {7, 8, 5, 5};
    int x = 5;
    int size = sizeof(a) / sizeof(a[0]);
    if(find(a, size, x)){
        cout << "Ton tai\n";
    }
    else{
        cout << "Khong ton tai\n";
    }
    return 0;
}