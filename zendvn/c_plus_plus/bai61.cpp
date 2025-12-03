// thay the phan tu bang tri tuyet doi

#include <iostream>

using namespace std;

void obs(int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] < 0){
            a[i] = -a[i];
        }
    }
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {2, -224, -16, 2};
    int size = sizeof(a) / sizeof(a[0]);
    obs(a, size);
    return 0;
}