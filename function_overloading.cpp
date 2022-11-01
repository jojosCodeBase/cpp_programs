#include<iostream>
using namespace std;
void print(int val){
    cout << "Here is int " << val << endl;
}
void print(double val){
    cout << "Here is double "<< val << endl;
}
void print(char const *c){
    cout << "Here is char* " << c << endl;
}
int main(){
    print(10);
    print(55.6);
    print("ten");
    return 0;
}