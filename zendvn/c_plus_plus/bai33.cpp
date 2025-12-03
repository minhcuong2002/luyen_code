// boi chung nho nhat

#include <iostream>
using namespace std;

// uoc chung (de quy)
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

// boi chung
int lcm(int a, int b){
    return (a * b) / gcd(a, b); // cong thuc: (a*b) / UCLN(a, b)
}

int main(){
    int x = 25, y = 10;
    cout << "BCNN cua " << x << " va " << y << " la " << lcm(x, y) << endl;
    return 0;
}