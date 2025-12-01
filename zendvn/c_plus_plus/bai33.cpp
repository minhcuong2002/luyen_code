// boi chung nho nhat

#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

int main(){
    int x = 25;
    int y = 10;
    cout << "BCNN cua " << x << " va " << y << " la " << lcm(x, y) << endl;
    return 0;
}