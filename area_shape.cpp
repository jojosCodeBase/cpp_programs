#include<iostream>
using namespace std;

void area(int side){
    cout << "Area of square : " << side*side << endl;
}

void area(float l, float b){
    cout << "Area of rectangle : " << l*b << endl;
}

void area(double rad){
    const float pi = 3.1428;
    cout << "Area of circle : " << pi*(rad*rad) << endl;
}

int main(){
    area(4);
    area(8.5, 6.5);
    area(3.2);
    return 0;
}