// diem thi cao nhat

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// Tách chuỗi theo ký tự cho trước
vector<string> split(string s, char delimiter){
    vector<string> tokens;
    string token;
    stringstream ss(s);
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

void findMaxScore(string input){
    // Tách từng học sinh theo dấu #
    vector<string> students = split(input, '#');

    for (string item : students) {
        // Tách tên và danh sách điểm
        int pos = item.find('/');
        string name = item.substr(0, pos);
        string scores = item.substr(pos + 1);

        // Tách các điểm
        vector<string> scoreList = split(scores, ',');

        int maxScore = -1;
        for (string s : scoreList) {
            int num = stoi(s);
            if (num > maxScore) maxScore = num;
        }

        cout << name << ": " << maxScore << endl;
    }
}

int main(){
    string input = "Lan/2,12,3,4#Dung/5,7#Cuong/5,2,97";
    findMaxScore(input);
    return 0;
}