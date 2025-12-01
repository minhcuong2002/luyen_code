// thu nhap cua lap trinh vien

#include <iostream>

using namespace std;

int salaryOfProgrammer(int lines, int timeDoing){
    int payForCheck = 0;
    if(lines < 10) payForCheck = 1;
    else if(lines >= 10 && lines <= 20) payForCheck = 2;
    else payForCheck = 5;
    return (timeDoing * 20) - payForCheck;
}

int main(){
    int totalLines = 50;
    int timeDoing = 4;
    cout << "Salary: " << salaryOfProgrammer(totalLines, timeDoing) << " $\n";
}