// suc mang cua chuoi

#include <iostream>
using namespace std;

// dem so ky tu nhieu nhat trong chuoi
int powerOfString(string s){
    char powerCharacter = s[0];
    int powerTime = 1, result = 0;

    for(int i = 0; i < s.length(); i++){
        if(powerCharacter == s[i + 1]){ // ky tu trung
            ++powerTime; // dang bien dem
        }
        else{ // nguoc lai
            powerCharacter = s[i + 1]; // doi ky tu 
            if(powerTime >= result){ // cap nhat ket qua
                result = powerTime;
            }
            powerTime = 1; // reset lai bien dem
        }
    }
    return result;
}

int main(){
    string s = "abbcccddddeeeeedcba";
    cout << powerOfString(s);
    return 0;
}