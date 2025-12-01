// uoc le lon nhat

#include <iostream>
using namespace std;

int main(){
    int n = 25;
    int res = 1;
    int i = n - 1;
    while(i > 0){
        if(n % i == 0 && i % 2 == 1){
            res = i;
            break;     
        }
        --i;
    }
    cout << "Uoc le lon nhat cua " << n << " la " << res << endl;
    return 0;
}