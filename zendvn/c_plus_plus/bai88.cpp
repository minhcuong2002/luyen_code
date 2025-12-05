// thong ke ID

#include <iostream>
#include <sstream>
using namespace std;

// xoa khoan trong trong chuoi
string removeSpace(string listId){
    string newListId = "";
    for(char x : listId){
        if(x != ' '){
            newListId += x;
        }
    }
    return newListId;
}

// dem id trong danh chuoi
int countId(string listId, string id, int length){
    string list = removeSpace(listId);
    stringstream ss(list); // tach chuoi thanh cac tu
    string token; // luu cac tu da tach
    int cnt = 0;
    while(getline(ss, token, ',')){ // doc qua cac tu ta luu vao token cach nhau ','
        if(token == id) ++cnt;
    }
    return cnt;
}

int main(){
    string listId = "69,     1    , 69,    69";
    string id = "69";
    int length = listId.length();
    cout << "ID " << id << " xuat hien " << countId(listId, id, length) << " lan\n";
    return 0;
}