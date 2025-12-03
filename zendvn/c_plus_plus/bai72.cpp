// Breadcrumb

#include <iostream>
using namespace std;

// bradcrumb
string breadCrumb(string s, int length){
    string breadcrumb = "";
    for(int i = 0; i < length; i++){
        if(s[i] == '/'){
            breadcrumb += " > ";
            continue;
        }
        else if(s[i] != ':'){
            breadcrumb += s[i];
        }
    }
    return breadcrumb;
}

int main(){
    string s1 = "/home/name/Documents/code/cplusplus.cpp";
    int length1 = s1.length();
    cout << breadCrumb(s1, length1) << endl;

    string s2 = "C:/User/name/Documents/code/cplusplus.cpp";
    int length2 = s2.length();
    cout << breadCrumb(s2, length2) << endl; 
    return 0;
}