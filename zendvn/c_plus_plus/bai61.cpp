// thay the phan tu bang tri tuyet doi

#include <iostream>
using namespace std;

// chuyen thanh tri chuyen doi
void obs(int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] < 0){ // neu la so < 0
            a[i] = -a[i]; // them dau '-' vao so am -> -(-number) = +number
        }
    }
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {2, -224, -16, 2};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    obs(a, size);
    return 0;
}