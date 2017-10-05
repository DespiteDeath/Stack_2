#include <iostream>
#include "Stack.hpp"
using namespace std;

int main() {
	try {
		cout << endl << "Stack of Int elements" << endl;
		Stack<int> Stack_int(7); 
    //add
		Stack_int.push(1);
		Stack_int.push(2);
		Stack_int.push(3);
		Stack_int.push(4);
		Stack_int.push(5);
		Stack_int.push(6);
		Stack_int.push(7);

    //delete Char
		for(int i = 0; i < 7; i++) {
			cout << Stack_int.pop() << endl;
		}
		cout << endl << endl;

		cout << "Stack of Char elements" << endl;
		Stack<char> Stack_char(5); 
    //add
    Stack_char.push('e');
		Stack_char.push('c');
		Stack_char.push('a');
		Stack_char.push('e');
		Stack_char.push('p');

    //delete char
		for(int i = 0; i < 5; i++) {
			cout << Stack_char.pop();
		}
		cout << endl << endl;

    cout << "Stack of Char elements with adding new memory" << endl;
		Stack<char> Stack_char_Z(5); 
    
    			Stack_char_Z.push('r');
		Stack_char_Z.push('a');
		Stack_char_Z.push('t');
		Stack_char_Z.push('i');
		Stack_char_Z.push('u');
    		Stack_char_Z.push('g');
    		Stack_char_Z.push(' ');
		Stack_char_Z.push('k');
		Stack_char_Z.push('c');
		Stack_char_Z.push('o');
		Stack_char_Z.push('R');

   
    for(int i = 0; i < 11; i++) {
			cout << Stack_char_Z.pop();
		}
		cout << endl << endl;

	} catch(const exception& e) { 
		cout << e.what() << endl;
	}
}
