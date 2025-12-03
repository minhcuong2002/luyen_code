// trung binh cong cac so chan o vi tri le

#include <iostream>
#include <iomanip>
using namespace std;

// trung binh cong so chang o vi tri le
void avgEvenAtOddPosition(int a[], int size){
    int sum = 0; // tinh tong so chan
    int cnt = 0; // dem so luong so chan
    cout << "(";

    for(int i = 0; i < size; i++){
        if((i + 1) % 2 == 1 && a[i] % 2 == 0){   // vị trí lẻ (1-based) & số chẵn
            cout << a[i];
            sum += a[i];
            cnt++;

            // tìm xem còn phần tử hợp lệ phía sau không
            bool hasNext = false;
            for(int j = i + 1; j < size; j++){
                if((j + 1) % 2 == 1 && a[j] % 2 == 0){
                    hasNext = true;
                    break;
                }
            }
            if(hasNext) cout << " + ";
        }
    }
    cout << ") / " << cnt << " = " << fixed << setprecision(1) << (float)sum / cnt << endl;
}

int main(){
    int a[] = {2, 4, 6, 2, 8};
    int size = sizeof(a) / sizeof(a[0]); // kich thuoc cua mang
    avgEvenAtOddPosition(a, size);
    return 0;
}