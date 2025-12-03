// loc so dien thoai

#include <iostream>
using namespace std;

// loc cac so
string filter(string s){
    string phone = "";
    for(char x : s){
        if(isdigit(x)){
            phone += x;
        }
    }
    return phone;
}

int main(){
    string s = "dksds!03@#833#@8983hndh!@";
    cout << filter(s) << endl;
    return 0;
}