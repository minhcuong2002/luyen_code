// khoa hoc dai nhat nang cao

#include <iostream>
#include <sstream>
#include <map>
using namespace std;

// tách chuỗi dạng "key=value;key=value" thành map
map<string, string> splitToMap(string s){
    map<string, string> m;
    string token;
    stringstream ss(s);

    while (getline(ss, token, ';')) {
        int pos = token.find('=');
        if (pos != string::npos) {
            string key = token.substr(0, pos);
            string val = token.substr(pos + 1);
            m[key] = val;
        }
    }
    return m;
}

void findMaxCourse(string inputName, string inputTime){
    // map chứa id -> name
    map<string, string> courseName = splitToMap(inputName);

    // map chứa id -> time
    map<string, string> courseTime = splitToMap(inputTime);

    int maxTime = -1;
    string maxID = "";

    for (auto &p : courseTime) {
        string id = p.first;
        int time = stoi(p.second);

        if (time > maxTime) {
            maxTime = time;
            maxID = id;
        }
    }

    cout << "Course id: " << maxID
         << " - Course Name: " << courseName[maxID]
         << " - Course Time = " << maxTime << endl;
}

int main(){
    string inputName = "abw=java;def=android;nfv=php";
    string inputTime = "abw=9920;nfv=240;def=1990";

    findMaxCourse(inputName, inputTime);
    return 0;
}