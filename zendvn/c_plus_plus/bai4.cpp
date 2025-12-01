// so ngau nhien

#include <iostream>
#include <random>

using namespace std;

int swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
    return 0;
}

int randomNumber(int start, int end){
    cout << "Random number form " << start << " to " << end << ": ";
    if(start > end){
        swap(start, end);
        int number = (int)(rand() % (end - start + 1)) + start;        
        return number;
    }
    else{
        int number = (int)(rand() % (end - start + 1)) + start;
        return number;
    }
}

int main(){
    int start = 19;
    int end = 29;
    cout << randomNumber(start, end) << endl;
    return 0;
}