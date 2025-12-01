// day so chan

#include <iostream>

using namespace std;

void evenNumbers(int s, int e){
    string res;
    for(int i = s; i <= e; i++){
        if(i % 2 == 0) res += to_string(i) + " ";
    }
    if(res.length() != 0) cout << res << "\n";
    else cout << "Khong co\n";
}

int main(){
    int start = 1;
    int end = 10;
    evenNumbers(start, end);
    return 0;
}