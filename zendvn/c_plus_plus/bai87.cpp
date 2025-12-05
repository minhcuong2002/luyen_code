// giai ma chuoi sang thoi gian

#include <iostream>
using namespace std;

string dateOfWeek(int number){
    string result = "Khong giai ma duoc\n";
    string dateVienNam[] = {"", "", "Thu hai", "Thu ba", "Thu tu", 
                            "Thu nam", "Thu sau", "Thu bay", "Chu nhat"};
    string dateEnglish[] = {"", "", "Monday", "Tuesday", "Wednesday", 
                            "Thurday", "Friday", "Saturday", "Sunday"};

    int numFirst = number / 10; // lay so thu nhat
    int numSecond = number % 10; // lay so thu hai

    if(numFirst == 1){ // == 1 -> su dung thu bang tieng anh
        result = dateEnglish[numSecond];
    }
    else{ // nguoc lai su dung thu bang tieng viet
        result = dateVienNam[numSecond];
    }
    return result;
}

int main(){
    int number = 23;
    cout << dateOfWeek(number) << endl;
    return 0;
}