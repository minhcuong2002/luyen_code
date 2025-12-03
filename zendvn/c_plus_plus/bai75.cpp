// trich xuat chuoi theo dieu kien

#include <iostream>
using namespace std;

// phan tich chuoi
void trichXuat(string s){
    string nums = "", word = "", symbol = "";
    for(char x : s){
        if(isdigit(x)){ // la so
            nums += x;
        }
        else if(isalpha(x)){ // la chu
            word += x;
        }
        else if(ispunct(x)){ // la ky tu
            symbol += x;
        }
    }
    cout << "Chuoi so: " << nums << endl
         << "Chuoi chu: " << word << endl
         << "Chuoi dac biet: " << symbol << endl;
}

int main(){
    string s = "ha&il983@#!|+an";
    trichXuat(s);
    return 0;
}