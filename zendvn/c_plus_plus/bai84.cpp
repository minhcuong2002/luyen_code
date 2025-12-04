// phan tach chuoi co ban - slipt mot tham so

#include <iostream> 
using namespace std;

// tach chuoi bang ky tu
void sliptStringByCharacter(string s, int l, char c){
    string result = "";
    string record = "";
    for(int i = 0; i < l; i++){
        if(s[i] == c){
            result += record + ", ";
            record = "";
        }else{
            record += s[i];
        }
    }
    cout << result << endl;
}

int main(){
    string s = "php/12/java/140/frontend/30";
    int length = s.length();
    char character = '/';
    sliptStringByCharacter(s, length, character);
    return 0;
}