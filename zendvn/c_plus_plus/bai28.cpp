// boi so

#include <iostream>

using namespace std;

void listMultiples(int n, int k, string &res){
    int val = n * k;
    if(val >= 100) return;
    res += to_string(val) + " ";
    listMultiples(n, k + 1, res);
}

int main(){
    int n = 25;
    string res = "";
    listMultiples(n, 0, res);
    cout << "Boi so nho hon 100 cua " << n << " la " << res << endl;
    return 0;
}