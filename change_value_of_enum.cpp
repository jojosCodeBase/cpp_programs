// program to change the default vaue of enum
#include<iostream>
using namespace std;
enum seasons{spring = 40, summer = 42, autumn = 44, winter = 46};
int main(){
    seasons s;
    s = winter;
    cout << "Summer: " << s << endl;
    return 0;
}