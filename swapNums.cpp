
#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
	int z = x;
	x = y;
	y = z;
}

int main() {
	int firstNum = 1;
	int secondNum = 2;

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum;

	return 0;
}
