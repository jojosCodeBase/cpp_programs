#include<iostream>
using namespace std;
int x = 8;
void square(int n){
    cout << "Square of " << n << " is: " << n*n;
}
int main(){
    int num;
    cout << "Value of x: " << x << endl;
    cout << "Enter value of number: ";
    cin >> num;
    square(num);
    return 0;
}