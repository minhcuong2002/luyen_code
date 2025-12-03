// mang doi xung 

#include <iostream>

using namespace std;

bool isSymmetric(int a[], int size){
    for(int i = 0; i < (size/2); i++){
        if(a[i] != a[size - i - 1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int a[] = {0, 1, 2, 1, 0};
    int size = sizeof(a) / sizeof(a[0]);
    if(isSymmetric(a, size)){
        cout << "Doi xung\n";
    }
    else{
        cout << "Khong doi xung\n";
    }
    return 0;
}