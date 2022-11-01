#include<iostream>
using namespace std;
void add1(int x, int y, int z){
    int sum = x + y + z;
    cout << "\nSum of integer values: " << sum << endl;
}
void add2(float x, float y, float z){
    float sum = x + y + z;
    cout << "\nSum of decimal values: " << sum << endl;
}
int main(){
    float fx, fy, fz;
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << "Enter three decimal: ";
    cin >> fx >> fy >> fz;
    add1(x, y, z);
    add2(fx, fy, fz);
    return 0;
}