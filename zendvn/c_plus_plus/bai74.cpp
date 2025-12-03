// chuyen nghich hoa thuong

#include <iostream>
using namespace std;

// chuyen doi chu hoa <=> thuong
string convert(string s){
    for(char &x : s){
        if(isupper(x)){
            x = tolower(x);
        }
        else{
            x = toupper(x);
        }
    }
    return s;
}

int main(){
    string s = "HaI Lan";
    cout << convert(s) << endl;
    return 0;
}