// thap cay thong Noel

#include <iostream>
using namespace std;

string repeatString(const string& s, int count) {
    string res = "";
    for(int i = 0; i < count; i++) res += s;
    return res;
}

int main() {
    int height = 7;
    string shape = "";
    string record = "";

    // phần tháp số
    for (int i = 1; i <= height; i++) {
        string character = (i % 2 == 0) ? "#" : "o";

        string around = repeatString(" ", height - i);
        string center  = "";

        for (int k = 1; k <= i; k++) {
            center += to_string(i) + character;
        }

        // xoá ký tự cuối
        center.pop_back();

        record = around + center + around;
        shape += record + "\n";
    }

    // phần hai cột |
    for (int i = 1; i <= height / 2; i++) {
        string space1 = repeatString(" ", (height + 1) / 2);
        string space2 = repeatString(" ", height - 4);
        record = space1 + "|" + space2 + "|";
        shape += record + "\n";
    }

    // phần đáy
    shape += repeatString("_", 2 * height - 1);

    cout << shape << endl;
    return 0;
}