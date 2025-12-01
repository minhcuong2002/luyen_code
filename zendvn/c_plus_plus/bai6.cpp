// diem so trung binh

#include <iostream>
#include <iomanip>

using namespace std;

int max(int one, int two, int three){
    if(one >= two && one >= three) return one;
    else if(two >= one && two >= three) return two;
    return three;
}

float averge(int one, int two, int three){
    return (float) (one + two + three) / 3;
}

int main(){
    int score1 = 7;
    int score2 = 8;
    int score3 = 4;
    cout << "Avg: " << fixed << setprecision(1) << averge(score1, score2, score3) << endl;
    cout << "Max: " << max(score1, score2, score3) << endl;
    return 0;
}