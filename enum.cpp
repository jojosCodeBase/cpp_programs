// program to implement enumeration type (emun)
#include<iostream>
using namespace std;
int main(){
    enum Month{January, February, March, April, May, June, July, August, September, October, November, December};
    Month currentMonth;
    currentMonth = September;
    cout << "Current Month = " << currentMonth+1;
    return 0;
}