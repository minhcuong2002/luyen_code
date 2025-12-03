// loai bo cac phan tu am

#include <iostream>
using namespace std;

// bo di phan tu < 0 -> chi in cac phan tu > 0
void removeNegative(int a[], int size){
    string res = "";
    for(int i = 0; i < size; i++){
        if(a[i] >= 0){
            res += to_string(a[i]) + " ";
        }
    }
    cout << res << endl;
}

int main(){
    int a[] = {2, -224, -16, 2, 3};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    removeNegative(a, size);
    return 0;
}