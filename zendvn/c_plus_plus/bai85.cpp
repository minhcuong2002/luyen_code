// phan tach chuoi nang cao - slipt nhieu tham so

#include <iostream>
using namespace std;

// tach chuoi bang nhieu ky tu
void sliptStringByCharacters(string s, int l, char c[], int cSize){
    string record = "";
    bool isSep;

    for(int i = 0; i < l; i++){
        isSep = false;

        // kiểm tra ký tự hiện tại có phải ký tự phân cách không
        for(int j = 0; j < cSize; j++){
            if(s[i] == c[j]){
                isSep = true;
                break;
            }
        }

        if(isSep){
            cout << record << ", ";
            record = "";
        } else {
            record += s[i];
        }
    }

    // in phần còn lại sau vòng lặp
    if(!record.empty()){
        cout << record << endl;
    }
}

int main(){
    string s = "abw=java;def=android;nfv-php";
    int length = s.length();
    char characters[] = {'=', ';'};   // 2 ký tự phân cách
    sliptStringByCharacters(s, length, characters, 2);
    return 0;
}
