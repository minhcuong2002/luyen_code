// sim ngu quy

#include <iostream>
using namespace std;

// kiem tra sim ngu quy
bool check(string s, int l){
    for(int i = 0; i < l; i++){
        char num_current = s[i];
        if(num_current = s[i + 1] && num_current == s[i + 2] && 
            num_current == s[i + 3] && num_current == s[i + 4]){ // kiem tra 4 so lien ke
            return true;
            break;
        }
    }
    return false;
}

int main(){
    string phone_number = "0947388888";
    int length_phone_number = phone_number.length();
    if(check(phone_number, length_phone_number)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}