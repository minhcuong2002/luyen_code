// so nguyen am duong chan le

#include <iostream>

using namespace std;

bool isEven(int n){
    return n % 2 == 0;
}

bool isPositive(int n){
    return n >= 0;
}

int main(){
    int number = 0;
    if(isEven(number) && isPositive(number)){
        cout << number << " la so nguyen duong chan" << endl;
    }
    else if(!isEven(number) && isPositive(number)){
        cout << number << " la so nguyen duong le" << endl;
    }
    else if(isEven(number) && !isPositive(number)){
        cout << number << " la so nguyen am chan" << endl;
    }
    else{
        cout << number << " la so nguyen am le" << endl;
    }
    return 0;
}