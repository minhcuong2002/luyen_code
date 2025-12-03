// chuoi chua so

#include <iostream>
using namespace std;

// kiem tra so
bool checkNum(string s){
    for(int x : s){
        if(isdigit(x)){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    string s = "@$7-bc";    
    if(checkNum(s)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }
    return 0;
}