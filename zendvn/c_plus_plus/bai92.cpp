// chuyen so co 2 chu so thanh chu

#include <iostream>
using namespace std;

// chuyen so thanh chu
void convert(int number){
    int numCopy = number;
    string arrNumberSpeak[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    string arrdigitSpeak[] = {"tram", "muoi", ""};
    string arrDigitSpeacialSpeak[] = {"linh", "muoi", ""};
    int arrDigits[] = {-1, -1, -1};
    
    string result = "";
    int count = 2;
    bool hasLastZero = numCopy % 10 == 0; // kiem tra so cuoi == 0

    // tach cac so va dua vao arrDigits
    while(numCopy > 0){
        int lastNum = numCopy % 10;
        numCopy /= 10;
        arrDigits[count] = lastNum;
        --count;
    }

    // duyet qua mang arrDigits
    for(int i = 0; i < 3; i++){
        int digit = arrDigits[i];
        if(digit != -1){ // i != -1 -> co 3 so
            string numSpeak = arrNumberSpeak[digit] + " ";
            string digitSpeak = arrdigitSpeak[i];
            if(i == 1 && digit <= 1){
                numSpeak = "";
                digitSpeak = arrDigitSpeacialSpeak[digit];
            }
            if(hasLastZero && i > 0 && digit == 0){
                numSpeak = "";
                digitSpeak = "";
            }
            result += numSpeak + digitSpeak + " ";
        }
    }
    cout << result << endl;
}

int main(){
    int number = 999;
    convert(number);
    return 0;
}