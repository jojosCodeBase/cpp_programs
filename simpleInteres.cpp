// program to calculate simple interest
#include<iostream>
using namespace std;
int main(){
    float p, r, t, i;
    cout << "Enter principle: ";
    cin >> p;
    cout << "Enter rate: ";
    cin >> r;
    cout << "Enter time: ";
    cin >> t;
    i = (p*r*t)/100;
    cout << "Simple interest = " << i;
    return 0;
}