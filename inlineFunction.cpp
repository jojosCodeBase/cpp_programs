// Write a C++ program that use inline function to find out the largest number among two numbers.
#include<iostream>
using namespace std;
inline int largest(int a, int b){
    if(a>b)
        return a;
    else    
        return b;
}
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Largest number: " << largest(a, b);
    return 0;
}