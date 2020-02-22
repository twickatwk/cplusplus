#include <iostream>
#include <string>

using namespace std;

class Stack {
	private:
		int top;
		int arr[5];
	public:
		Stack() {
			top = -1;
			for(int i = 0; i < 5; i++) {
				arr[i] = 0;
			}
		}

		bool isEmpty() {
			if (top == -1) {
				return true;
			}
			return false;
		}
		bool isFull() {
			if (top == 4) {
				return true;
			}
			return false;
		}
		void push(int data) {
			if (isFull()) {
				cout << "stack overflow" << endl;
			}else {
				top++;
				arr[top] = data;
			}
		}
		int pop() {
			if (isEmpty()) {
				cout << "stack is empty" << endl;
				return 0;
			}else {
				int dataToReturn = arr[top];
				arr[top] = 0;
				top--;
				return dataToReturn;
			}
		}
		int count() {
			return (top+1);
		}
		int peek(int position) {
			if (isEmpty()) {
				cout << "stack is empty" << endl;
				return 0;
			}else {
				return arr[position];
			}
		}
		void change(int positiion, int data) {
			arr[positiion] = data;
			cout << "Value is changed at the specified location" << endl;
		}
		
		void display() {
			cout << "All values in the stack are: " << endl;
			for (int i = 4; i >= 0; i--) {
				cout << arr[i] << endl;
			}
		}

};

int main() {
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.display();
	// the value of 3 will be popped out
	cout << stack.pop() << endl;
	// only [2, 1] is left in the stack
	stack.display();
	return 0;
}
