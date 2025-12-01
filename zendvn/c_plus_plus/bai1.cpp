// kich thuoc hinh vuong

#include <iostream>

using namespace std;

int perimeter(int squareLength){
    return squareLength * 4;
}

int area(int squareLength){
    return squareLength * squareLength;
}

int main(){
    int squareLength = 6;
    cout << "Perimeter: " << perimeter(squareLength) << endl;
    cout << "Area: " << area(squareLength) << endl;
    return 0;
}