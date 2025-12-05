// khoa hoc dai nhat

#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

// hàm kiểm tra chuỗi có phải số hay không
bool isNumber(const string &s){
    for(char c : s){
        if(!isdigit(c)) return false;
    }
    return true;
}

// tìm khóa học có thời gian lớn nhất
void findMaxCourse(string s){
    int maxTime = -1;
    string maxCourse = "";

    stringstream ss(s);
    string token;
    string lastCourse = ""; // lưu lại tên khóa trước số

    while(getline(ss, token, '/')){
        if(isNumber(token)){
            int time = stoi(token);
            if(time > maxTime){
                maxTime = time;
                maxCourse = lastCourse;
            }
        } else {
            lastCourse = token; // token là tên khóa học
        }
    }

    cout << maxCourse << ": " << maxTime << endl;
}

int main(){
    string s = "php/12/frontend/30/javascript/15/python/140";
    findMaxCourse(s);
    return 0;
}