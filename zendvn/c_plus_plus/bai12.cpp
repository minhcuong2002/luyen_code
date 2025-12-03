// may tinh don gian

#include <iostream>
using namespace std;

// tinh toan
int calculator(int a, int b, char op){
    switch(op){
        case '+': return a + b; break;
        case '-': return a - b; break;
        case 'x': case 'X': case '*': return a * b; break;
        case '/': return a / b; break;
        default: cout << "Khong thuc hien duoc, phep tinh khong hop le\n"; return 0; break;
    }
}

int main(){
    int num1 = 6, num2 = 3;
    char op = '/';
    cout << num1 << " " << op << " " << num2 << " = " << calculator(num1, num2, op) << endl;
    return 0;
}