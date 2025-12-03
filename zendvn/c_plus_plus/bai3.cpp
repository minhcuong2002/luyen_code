// so lon nhat trong 3 so

#include <iostream>
using namespace std;

// so lon nhat trong 3 so
int max(int one, int two, int three){
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
    int one = 1, two = 5, three = 19;
    cout << max(one, two, three)<< endl;
    return 0;
}