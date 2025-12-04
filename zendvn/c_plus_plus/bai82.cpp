// sim ong dia

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

// kiem tra sim ong dia
bool check(string phone, int length){
    string phone_number = removeDot(phone, length);
    int tmp = stoi(phone_number.substr(phone_number.length() - 2)); // lay 2 so cuoi cua so dien thoai
    if(tmp == 38 || tmp == 78){
        return true;
    }
    return false;
}

int main(){
    string s = "0903.661.678";
    int l = s.length();
    if(check(s, l)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}