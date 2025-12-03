// chuan hoa chuoi

#include <iostream>
#include <sstream>
using namespace std;

// chuan hoa chuoi
void remade(string s){
    // tach chuoi
    stringstream ss(s);
    string word, result = "";
    while(ss >> word){
        if(word == ".") continue;        // Bỏ dấu chấm đứng riêng
        
        if(!result.empty()) result += " ";
        result += word;
    }
    
    // viet hoa chu dau
    if(!result.empty()){
        result[0] = toupper(result[0]);
    }

    // them dau '.' cuoi chuoi neu chua co
    if(result.back() != '.'){
        result += '.';
    }

    cout << result << endl;
}

int main(){
    string s = "   Java    Is     easy   .   ";
    remade(s);
    return 0;
}