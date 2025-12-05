// vi tri xuat hien cua tu

#include <iostream>
#include <sstream>
using namespace std;

// tim vi tri cua tu
int findWordIndex(string sentence, string searchWord){
    stringstream ss(sentence); // tach cach tu trong chuoi
    string word; // luu cac tu da tach
    int index = 1;

    while (ss >> word) {
        // kiem tra chieu dai cua tu torng chuoi va tu tim kiem
        if (word.substr(0, searchWord.length()) == searchWord) {
            return index;
        }
        ++index;
    }
    return -1;
}

int main(){
    string sentence = "lap trinh php tai zendvn la chuong trinh";
    string searchWord = "tri";

    cout << findWordIndex(sentence, searchWord) << endl;
    return 0;
}
