// thong ke khoa hoc

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

// Hàm tách chuỗi theo ký tự
vector<string> split(string s, char delimiter){
    vector<string> arr;
    string token;
    stringstream ss(s);
    while(getline(ss, token, delimiter)){
        arr.push_back(token);
    }
    return arr;
}

void statisticCourse(string inputCategory, string inputCourse){
    // --- BẢNG DANH MỤC: D1 -> "Lập trình Web" ---
    map<string, string> category;
    vector<string> catTokens = split(inputCategory, '$');

    for (string ct : catTokens) {
        int pos = ct.find('|');
        string id = ct.substr(0, pos);
        string name = ct.substr(pos + 1);
        category[id] = name;
    }

    // --- THỐNG KÊ: danh mục -> danh sách khóa học ---
    map<string, vector<string>> courseList;

    vector<string> courseTokens = split(inputCourse, '=');
    for (string ct : courseTokens) {

        // Một mục dạng: 1|HTML CSS|D1
        vector<string> p = split(ct, '|');
        if (p.size() == 3) {
            string courseName = p[1];
            string catID = p[2];
            courseList[catID].push_back(courseName);
        }
    }

    // --- IN KẾT QUẢ ---
    int index = 1;
    for (auto &cat : category) {
        string catID = cat.first;
        string catName = cat.second;

        vector<string> &courses = courseList[catID];

        cout << index++ << ". " << catName << " (" << courses.size() << "): ";

        for (int i = 0; i < courses.size(); i++) {
            cout << courses[i];
            if (i < courses.size() - 1) cout << ", ";
        }
        cout << endl;
    }
}

int main(){
    string inputCategory = "D1|Lap trinh web$D2|Lap trinh phan mem$D3|Lap trinh di dong";
    string inputCourse   = "1|HTML CSS|D1=2|PHP|D1=3|laravel|D1=4|Winform|D2=5|NodeJs|D2=6|React Native|D3";

    statisticCourse(inputCategory, inputCourse);
    return 0;
}