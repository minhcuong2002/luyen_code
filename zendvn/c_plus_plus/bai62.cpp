// thay the pha tu bang gia tri lon nhat

#include <iostream>

using namespace std;

int max(int a[], int size){
    int max = a[0];
    for(int i = 1; i < size; i++){
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

void replace(int a[], int n){
    int maxNum = max(a, n);
    for(int i = 0; i < n; i++){
        if(a[i] != maxNum)
            a[i] = maxNum;
    }
    for(int k = 0; k < n; k++){
        cout << a[k] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {2, 224, 16, 2};
    int size = sizeof(a) / sizeof(a[0]);
    replace(a, size);
    return 0;
}