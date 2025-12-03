// phan tu la tong 2 phan tu dung ke

#include <iostream>

using namespace std;

bool find(int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] == a[i - 1] + a[i + 1]){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int a[] = {1, 2, 7, 9, 2};
    int size = sizeof(a) / sizeof(a[0]);
    if(find(a, size)){
        cout << "Ton tai\n";
    }
    else{
        cout << "Khong ton tai\n";
    }
    return 0;
}