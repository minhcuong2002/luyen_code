// sim tien len don

#include <iostream>
using namespace std;

// bo dau cham so dien thoai neu co
string removeDot(string s, int length){
    string newNum = "";
    for(auto x : s){
        if(isdigit(x)){
            newNum += x;
        }
    }
    return newNum;
}

// kiem tra sim tien len don
bool check(string phone, int length){
    string phoneNumber = removeDot(phone, length);
    phoneNumber = phoneNumber.substr(phoneNumber.length() - 3); // lay 3 so cuoi
    int first = phoneNumber[0] - 0;
    int second = phoneNumber[1] - 0;
    int third = phoneNumber[2] - 0;

    if(first == second - 1 && first == third - 2){ // kiem tra so tang dan
        return true;
    }
    return false;
}

int main(){
    string s = "0917.934.678";
    int l = s.length();
    if(check(s, l)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}