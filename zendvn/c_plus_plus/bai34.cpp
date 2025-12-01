// uoc va boi chung

#include <iostream>

using namespace std;

int main(){
    int x = 18;
    int y = 2;
    string res = "";
    int i = 1;
    while(i <= x){
        if(x % i == 0 && i % y == 0)
            res += to_string(i) + " ";
        ++i;
    }
    cout << res << endl;
    return 0;
}