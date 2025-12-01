// uoc chung lon nhat

#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int x = 25;
    int y = 10;
    cout << "UCLN cua " << x << " va " << y << " la " << gcd(x, y) << endl;
    return 0;
}