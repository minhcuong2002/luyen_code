// sim luc quy

#include <iostream>
using namespace std;

// kiem tra sim luc quy
bool check(string s){
    for(int i = 0; i < s.length(); i++){
        char num_current = s[i];
        if(num_current = s[i + 1] && num_current == s[i + 2] && 
            num_current == s[i + 3] && num_current == s[i + 4] && 
            num_current == s[i + 5]){ // kiem tra 5 so lien ke
            return true;
            break;
        }
    }
    return false;
}

int main(){
    string phone_number = "0818999999";
    if(check(phone_number)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}