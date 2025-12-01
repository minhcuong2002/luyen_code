// nam nhuan

#include <iostream>

using namespace std;

bool isLeapYear(int y){
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return true;
    return false;
}

int main(){
    int year = 4020;
    if(isLeapYear(year)) cout << "Nam nhuan\n";
    else cout << "Khong la nam nhuan\n";
    return 0;
}