// sinh vien co diem cao nhat

#include <iostream>
using namespace std;

// kiem tra sinh vien co diem cao nhat
void check(int score[], string student[], int length){
    int index = 0; // vi tri diem cao nhat
    for(int i = 0; i < length; i++){
        int currentScore = score[i]; // luu diem hien tai
        index = currentScore > score[index] ? i : index; // cap nhat diem cao nhat
    }
    cout << "HV co diem cao nhat - " << student[index] << ": " << score[index] << endl; // ung voi diem cao nhat la ten cua HV
}

int main(){
    int score[] = {2, 9, 8, 4, 10};
    string student[] = {"Hieu", "Dung", "Minh", "Cuong", "Lan"};
    int length = sizeof(score) / sizeof(int); // kich thuoc cua mang
    check(score, student, length);
}