// so ngau nhien

#include <iostream>
#include <random>
using namespace std;

// doi gia tri
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

// lay so ngau nhien tu start den end
int randomNumber(int start, int end){
    cout << "Random number form " << start << " to " << end << ": ";
    if(start > end){
        swap(start, end);
        int number = (int)(rand() % (end - start + 1)) + start; // random tu start den end       
        return number;
    }
    else{
        int number = (int)(rand() % (end - start + 1)) + start; // random tu start den end
        return number;
    }
}

int main(){
    int start = 19, end = 29;
    cout << randomNumber(start, end) << endl;
    return 0;
}