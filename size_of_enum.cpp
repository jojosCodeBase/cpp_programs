// program to display the size of enum variable
#include<iostream>
using namespace std;
enum week{Sunday = 1, Monday = 2, Tuesday, Wednesday, Thursday, Friday, Saturday};
week w1;
int main(){
    // w1 = Monday;
    // cout << w1 << endl;
    cout << "Size of enum variable is " << sizeof(w1) <<" bytes.";
    return 0;
}