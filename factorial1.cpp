// Factorial function, iterative
#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
}

unsigned int factorial (unsigned int n) {
	static int count = 0;
	count++;
	cout << "Count: " << count << endl;
	unsigned int product = 1;
	for (unsigned int i = 1; i <= n; i++)
		product *= i;
	return product;
}