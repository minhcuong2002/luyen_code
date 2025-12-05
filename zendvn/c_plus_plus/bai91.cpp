// chuyen mang thanh chuoi tang dan

#include <iostream>
using namespace std;

// chuyen mang thanh chuoi
void convert(int a[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    // chuyen mang thanh chuoi
    string result = "";
    for(int i = 0; i < size; i++){
        if(i < size - 1){
            result += to_string(a[i]) + '-';
        }else{
            result += to_string(a[i]);
        }
    }
    cout << result;
}

int main(){ 
    int a[] = {1, 2, 3, 2};
    int size = sizeof(a) / sizeof(int);
    convert(a, size);
    return 0;
}
