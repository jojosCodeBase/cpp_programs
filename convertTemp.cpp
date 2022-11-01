// program to accept temperature in Farenheit and print in centigrade.
#include<iostream>
using namespace std;
int main(){
    float F, C;
    cout << "\nEnter temperature in Farenheit: ";
    cin >> F;
    C = 5*(F-32)/9;
    cout << "Temperature in celcius is: " << C;
    return 0;
}