// tong va thong so chan le

#include <iostream>
using namespace std;

// tong so chan
int sumEven(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        int x = a[i];
        if(x % 2 == 0)
            sum += x;
    }
    return sum;
}

// tong so le
int sumOdd(int a[], int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        int x = a[i];
        if(x % 2 != 0) sum += x;
    }
    return sum;
}

int main(){
    int a[] = {4, 2, 3, 6};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    cout << "sumEven: " << sumEven(a, size) << endl;
    cout << "sumOdd: " << sumOdd(a, size) << endl;
    cout << "sumAll: " << sumEven(a, size) + sumOdd(a, size) << endl;
    return 0;
}