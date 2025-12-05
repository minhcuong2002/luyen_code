// giai ma chuoi sang thu mat

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

// GIẢI MÃ
void discryption(const string &input) {
    vector<int> keys;
    string letters = "";

    // --- BƯỚC 1: Tách key đúng quy tắc: mỗi digit = 1 key ---
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            keys.push_back(input[i] - '0');  // số 1 chữ số
        }
        else if (isalpha(input[i])) {
            letters += input[i];             // gom chữ
        }
    }

    // --- BƯỚC 2: Cắt theo keys ---
    string result = "";
    int start = 0;

    for (int k : keys) {
        if (start >= letters.size()) break;

        int sz = min(k, (int)letters.size() - start);
        string word = letters.substr(start, sz);

        if (!word.empty())
            word[0] = toupper(word[0]);

        result += word + " ";
        start += sz;
    }

    cout << result << endl;
}

int main() {
    string input = "2c+)1o!@(*&!y@&chi&^c!@#o3co$23%%^nd$#!uo5ng";
    discryption(input);
    return 0;
}