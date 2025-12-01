//so lon nhat tong 3 so

#include <iostream>

using namespace std;

int sumofthree(int one, int two, int three){
    cout << "Max " << one << ", " << two << ", " << three << ": ";
    if(one >= two && one >= three){
        return one;
    }
    else if(two >= one && two >= three){
        return two;
    }
    else{
        return three;
    }
}

int main(){
    int one = 1;
    int two = 5;
    int three = 19;
    cout << sumofthree(one, two, three)<< endl;
    return 0;
}