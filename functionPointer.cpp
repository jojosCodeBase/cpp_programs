#include<iostream>
using namespace std;

// function takes value as parameter
void func1(int num){
	cout << "num = " << num << endl;
}

// function that takes reference as parameter
void func2(int &num){
	cout << "num = " << num << endl;
}
int main(){
	int num = 5;
	
	// pass by value
	func1(num);
	
	//pass by reference	
	func2(num);
	
	return 0;
}
