
#include <iostream>
using namespace std;

int main() {
	string food = "Pizza";
	// this creates a new pointer
	string* ptr = &food;
	cout << food << "\n"; // outputs the value of food
	cout << &food << "\n"; // outputs the memory address of food

	// changes the value of the pointer, which will also change the value of the original variable food
	*ptr = "Hamburger";

	cout << food << "\n";
	cout << *ptr << "\n";

}
