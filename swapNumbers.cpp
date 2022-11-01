#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 18;
    cout << "a = " << a << " b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << " b = " << b;
    return 0;
}