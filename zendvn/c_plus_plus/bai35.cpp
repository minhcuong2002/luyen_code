// thong ke uoc so chan

#include <iostream>

using namespace std;

int main(){
    int n = 144;
    string res = "";
    int i = 2;
    while(i <= n){
        if(n % i == 0)
            res += to_string(i) + " ";
        i += 2;
    }
    cout << "Uoc so chan cua " << n << " la " << res << endl;
    return 0;
}