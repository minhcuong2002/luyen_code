// so chi het cho 13

#include <iostream>

using namespace std;

void digitsDivisibleBy13(int s, int e){
    string res;
    for(int i = s; i <= e; i++){
        if(i % 13 == 0) res += to_string(i) + " ";
    }
    if(res.length() != 0) cout << res << "\n";
    else cout << "Khong co\n";
}

int main(){
    int start = 1;
    int end = 30;
    digitsDivisibleBy13(start, end);
    return 0;
}