// phan tu lon nhat va lon nhif

#include <iostream>
using namespace std;

// tim phan tu lan nhat va lon nhi
void maxOneTwo(int listNum[], int length){
    int maxOne = listNum[0];
    int maxTwo = listNum[1];
    for(int i = 2; i < length; i++){
        if(listNum[i] > maxOne){ // phan tu i > phan tu maxOne
            maxTwo = max(maxOne, maxTwo); // cap nhat phan tu lon nhi
            maxOne = listNum[i]; // cap nhat phan tu lon nhat
        }
        else if(listNum[i] > maxTwo){ // phan tu i > maxTwo && phan tu i < maxOne
            maxOne = max(maxOne, maxTwo); // cap nhat phan tu lon nhat
            maxTwo = listNum[i]; // cap nhat phan tu lon nhi
        }
    }
    cout << "Max 1: " << maxOne << "\nMax 2: " << maxTwo << endl;
}

int main(){
    int listNum[] = {1, 2, 3, 4, 4};
    int length = sizeof(listNum) / sizeof(int);
    maxOneTwo(listNum, length);
    return 0;
}