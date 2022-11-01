#include<iostream>
using namespace std;

// function prototype with pointer as arguments
void swap(int*, int*);

int main(){
	int a = 1, b = 2;
	
	cout << "Before swapping:" << endl;
	cout << "a = " << a << "\nb = " << b <<  endl;
	
	swap(&a, &b);
	
	cout << "\nAfter swapping:" << endl;
	cout << "a = " << a << "\nb = " << b << endl;
	
	return 0;
}

// function defination to swap numbers

void swap(int *n1, int *n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
