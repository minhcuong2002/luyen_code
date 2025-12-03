// trung binh cong loai tru max va min trong mang

#include <iostream>
#include <iomanip>

using  namespace std;

float sum(int a[], int size){
    int min = a[0];
    int max = a[0];
    int total = 0;
    for(int i = 0; i < size; i++){
        int numCurrent = a[i];
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
        total += numCurrent;
    }
    return (float)(total - min - max) / (size - 2);
}

int main(){
    int a[] = {4, 3, 1, 2};
    int size = sizeof(a) / sizeof(a[0]);
    cout << fixed << setprecision(1) << sum(a, size) << endl;
    return 0;
}