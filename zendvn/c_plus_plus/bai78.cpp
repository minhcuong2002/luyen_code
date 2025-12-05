// sim tu quy

#include <iostream>
using namespace std;

// kiem tra sim tu quy
bool check(string s){
    for(int i = 0; i < s.length(); i++){
        char num_current = s[i];
        if(num_current = s[i + 1] && num_current == s[i + 2] && num_current == s[i + 3]){ // kiem tra 3 so lien ke
            return true;
            break;
        }
    }
    return false;
}

int main(){
    string phone_number = "0765743333";
    if(check(phone_number)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}