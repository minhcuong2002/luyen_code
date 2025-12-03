// nguyen am

#include <iostream>
using namespace std;

// kiem tra tu nguyen am
bool isVowel(char c){
    char token = c;
    switch (token){
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
            return true; break;
        default:
            return false; break;
    };
}

int main(){
    char c = '1';
    if(isVowel(c)) cout << "Nguyen am\n";
    else cout << "Phu am\n";
    return 0;
}