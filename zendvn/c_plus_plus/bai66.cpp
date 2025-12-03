// trung binh cong loai tru max va min trong mang

#include <iostream>
#include <iomanip>
using  namespace std;

// tinh tong (tru max va min)
float avg(int a[], int size){
    int min = a[0]; // luu gia tri min
    int max = a[0]; // luu gia tri max
    int total = 0; // luu tong cac gia tri cua mang
    for(int i = 0; i < size; i++){
        int numCurrent = a[i];
        if(a[i] < min) min = a[i]; // cap nhat gia tri min
        if(a[i] > max) max = a[i]; // cap nhat gia tri max
        total += numCurrent; // tong cac phan tu
    }
    return (float)(total - min - max) / (size - 2); // (tong - min - max) / (size - 2) : 2 la max va min
}

int main(){
    int a[] = {4, 3, 1, 2};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    cout << fixed << setprecision(1) << avg(a, size) << endl;
    return 0;
}