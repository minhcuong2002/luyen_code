// ham toan hoc

#include <iostream>
using namespace std;

// cong
int add(int a, int b){
    return a + b;
}

// tru
int subtract(int a, int b){
    return a - b;
}

// nhan
int multiply(int a, int b){
    return a * b;
}

// chia
int divide(int a, int b){
    if(b == 0){
        cout << "Error: division by zero\n";
        return 0;
    }
    return a / b;
}

// chia du
int modulo(int a, int b){
    if(b == 0){
        cout << "Error: modulo by zero\n";
        return 0;
    }
    return a % b;
}

int main(){
    int number1 = 5, number2 = 3;
    cout << number1 << " + " << number2 << " = " << add(number1, number2) << endl;
    cout << number1 << " - " << number2 << " = " << subtract(number1, number2) << endl;
    cout << number1 << " * " << number2 << " = " << multiply(number1, number2) << endl;
    cout << number1 << " / " << number2 << " = " << divide(number1, number2) << endl;
    cout << number1 << " % " << number2 << " = " << modulo(number1, number2) << endl;
    return 0;
}