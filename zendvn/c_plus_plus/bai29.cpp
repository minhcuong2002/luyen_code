// uoc so

#include <iostream>
using namespace std;

// uoc so (de quy)
void listDivisors(int n, int k, string &res){
    if(k > n) return;
    if(n % k == 0){
        res += to_string(k) + " ";
    }
    listDivisors(n, k + 1, res);
}

int main(){
    int n = 1000;
    string res = "";
    listDivisors(n, 1, res);
    cout << "Uoc so cua " << n << " la " << res << endl;
    return 0;
}