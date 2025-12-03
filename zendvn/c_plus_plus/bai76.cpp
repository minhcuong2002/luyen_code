// duong dan tap tin don gian

#include <iostream>
using namespace std;

// tim ten file va phan mo rong
void fileName(string s){
    int lastSlash = s.find_last_of("/\\"); // tim vi tri ki tu '/' cuoi cung trong chuoi
    cout << "last Slash: " << lastSlash << endl;

    // Tách filename
    string filename = s.substr(lastSlash + 1);

    // Tìm dấu . trong chính filename
    int lastDot = filename.find_last_of("."); // tim vi tri ki tu '.' cuoi cung trong chuoi

    string fileNameOnly = filename.substr(0, lastDot); // lay ten file
    string fileExtension = filename.substr(lastDot + 1); // lay phan mo rong cua file

    cout << "Name: " << fileNameOnly << endl;
    cout << "Extension: " << fileExtension << endl;
}

int main(){
    string s = "/home/name/Documents/code/cplusplus.cpp";
    fileName(s);
    return 0;
}