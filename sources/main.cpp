#include "stack.hpp"

void foo_init() {
	cout << endl << "Start init func" << endl;
	Stack<int> IntArr;
	Stack<char> CharArr;
	cout << "Reply\t" << "Created 2 arrays: IntArr & CharArr." << endl << endl;
}

void foo_push() {
	cout << endl << "Start push func" << endl;
	Stack<int> IntArr;
	for(int i = 0; i < 10; i++) { IntArr.push(i*3); }
		
	cout << "Reply\t";
	for(size_t j = 0; j < IntArr.count(); j++) { cout << IntArr[j] << " "; }
	cout << endl << endl;
}

void foo_pop() {
	cout << endl << "Start pop func" << endl;
	Stack<double> DoubleArr;
	for(int i = 0; i < 10; i++) { DoubleArr.push(double(i)); }
		
	cout << "Reply\t";
	for(int j = 0; j < 7; j++) { cout << DoubleArr.pop() << " "; }
	cout << endl << endl;
}

void foo_empty() {
	cout << endl << "Start empty func" << endl;
	Stack<char> CharArr;

	char text[] = "srehtorb yninihsreV";

	for(int i = 0; i < strlen(text); i++) { CharArr.push(text[i]); }

	cout << "Reply\t";
	while(!CharArr.empty()) {
		cout << CharArr.pop() << " ";
	}
	cout << endl << endl;
}