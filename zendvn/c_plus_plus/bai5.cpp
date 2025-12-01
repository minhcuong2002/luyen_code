// ham toan hoc

#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    if(b == 0){
        cout << "Error: division by zero\n";
        return 0;
    }
    return a / b;
}

int modulo(int a, int b){
    if(b == 0){
        cout << "Error: modulo by zero\n";
        return 0;
    }
    return a % b;
}

int main(){
    int number1 = 5;
    int number2 = 3;
    cout << number1 << " + " << number2 << " = " << add(number1, number2) << endl;
    cout << number1 << " - " << number2 << " = " << subtract(number1, number2) << endl;
    cout << number1 << " * " << number2 << " = " << multiply(number1, number2) << endl;
    cout << number1 << " / " << number2 << " = " << divide(number1, number2) << endl;
    cout << number1 << " % " << number2 << " = " << modulo(number1, number2) << endl;
    return 0;
}