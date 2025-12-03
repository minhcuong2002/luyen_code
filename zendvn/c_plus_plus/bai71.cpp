// dem so tu trong chuoi

#include <iostream>
using namespace std;

// dem so tu
int countString(const string& s){
    int cnt = 0;
    bool inWord = false;
    for(char c : s){
        if(c != ' '){
            if(!inWord){
                ++cnt;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return cnt;
}

int main(){
    string s = "luu luong hai lan";
    cout << countString(s) << endl;
    return 0;
}
