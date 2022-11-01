#include<iostream>
using namespace std;
inline void displayNum(int num){
	cout << "num = " << num << endl;
}
int main(){
	displayNum(10); // first call
	displayNum(40); // second call
	displayNum(325); // third call
	return 0;
}