// bang cuu chuong

#include <iostream>

using namespace std;

void multiplicationTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main(){
    int number = 5;
    multiplicationTable(number);
    return 0;
}