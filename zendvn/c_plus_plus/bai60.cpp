// so lon nhat trong mang

#include <iostream>
using namespace std;

// so lon nhat
int max(int a[], int size){
    int max = a[0];
    for(int i = 1; i < size; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int a[] = {2, 4, 16, 2};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    cout << "Max: " << max(a, size) << endl;
    return 0;
}