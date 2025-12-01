// doanh so ban hang

#include <iostream>

using namespace std;
 
float sales(int totalSale){
    if(totalSale <= 100) return totalSale * 0.05;
    else if(totalSale > 100 && totalSale <= 300) return totalSale * 0.1;
    else return totalSale * 0.2;
}

int main(){
    int totalSale = 1800;
    cout << "Hoa hong: " << sales(totalSale) << endl;
    return 0;
}