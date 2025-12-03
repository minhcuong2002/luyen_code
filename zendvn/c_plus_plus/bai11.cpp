// phim the gioi lap trinh

#include <iostream>
using namespace std;

// kiem tra tuoi
bool ok(int age){
    return age >= 15;
}

int main(){
    int yourAge = 1;
    if((ok(yourAge))) cout << "Ban duoc xem phim The gioi lap trinh\n";
    else cout << "Ban khong duoc xem phim The gioi lap trinh\n";
    return 0;
}