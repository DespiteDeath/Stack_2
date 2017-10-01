#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
class Stack {
public:
    Stack();
    Stack(size_t s);
    size_t count() const;
    bool empty() const;
    void push(T const &);
    T pop();
    ~Stack();
    T& operator [](int spot) {
    	return array_[spot];
    }
private:
    T* array_;
    size_t array_size_;
    size_t _count;
};


template <typename T>
Stack<T>::Stack() : array_size_(size_t(10)), array_(new T[10]), _count(0) {}

template <typename T>
Stack<T>::Stack(size_t r) : array_size_(r), array_(new T[r]), _count(0) {}

template <typename T>
Stack<T>::~Stack() { delete[] array_; }

template <typename T>
void Stack<T>::push(T const &wow) {
	if(_count == array_size_) {
		T* array_exp_ = new T[array_size_*2];
		for(int i = 0; i < array_size_; i++) { array_exp_[i] = array_[i]; }
		array_size_ *= 2;
		delete[] array_;
		array_ = array_exp_;
	}
	array_[_count++] = wow;
}

template <typename T>
T Stack<T>::pop() {
	if(_count == 0) throw runtime_error("Empty_stack");
	return array_[--_count];
}

template <typename T>
size_t Stack<T>::count() const {
	return _count;
}

template <typename T>
bool Stack<T>::empty() const {
	if(count() == 0) return true;
	return false;
}

void foo_init();
void foo_push();
void foo_pop();
void foo_empty();

#endif
