// giai ma chuoi sang ten

#include <iostream>
using namespace std;

// ma hoa
void discrypt(string str, string key, int lengthKey){
    string result = "";
    int startIndex = 0; // vi tri bat dau

    for(int i = 0; i < lengthKey; i++){
        int size = key[i] - '0'; // lay kich thuoc cua 1 tu
        string word = str.substr(startIndex, size) + " "; // lay so luong ky tu dua vao key
        word[0] = toupper(word[0]); // viet hoa ky tu dau
        result += word; // cap nhat ket qua
        startIndex += size; // cap nhat vi tri bat dau
    }
    cout << result << endl;
}

int main(){
    string str = "hoclaptrinh";
    string key = "335";
    int length = key.length();
    discrypt(str, key, length);
    return 0;
}