// so chi het cho 13

#include <iostream>
using namespace std;

// doi gia tri
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

// so chia het cho 13 tu start den end
void digitsDivisibleBy13(int s, int e){
    string res;
    if(s > e){
        swap(s, e);
    }
    for(int i = s; i <= e; i++){
        if(i % 13 == 0) res += to_string(i) + " ";
    }
    if(res.length() != 0) cout << res << "\n";
    else cout << "Khong co\n";
}

int main(){
    int start = 1, end = 30;
    digitsDivisibleBy13(start, end);
    return 0;
}