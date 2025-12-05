// phan tach chuoi co ban - slipt mot tham so

#include <iostream> 
using namespace std;

// tach chuoi bang ky tu
void sliptStringByCharacter(string s, char c){
    string result = "";
    string record = "";
    for(int i = 0; i < s.length(); i++){
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
    char character = '/';
    sliptStringByCharacter(s, character);
    return 0;
}