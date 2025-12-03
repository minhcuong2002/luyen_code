// so ngay trong thang

#include <iostream>
using namespace std;

// kiem tra so ngay trong nam
int dayInMonth(int year, int month){
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31; break;
        case 4: case 6: case 9: case 11:
            return 30; break;
        case 2:
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return 29; // nam nhuan
            else return 28; break; // nam khong nhuan
        default:
            return 0; break;
    }
}

int main(){
    int year = 2022, month = 2;
    cout << "Thang " << month << " nam " << year << " co " << dayInMonth(year, month) << " ngay\n";
    return 0;
}