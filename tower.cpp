// Tower of Hanoi puzzle for an arbitrary number of disks, recursive
#include <iostream>
using namespace std;

void tower (int n_disks, char from, char to, char interim);

int main () {
	int n;
	cout << "Number of disks: ";
	cin >> n;
	tower(n, 'A', 'C', 'B');
}

void tower (int n_disks, char from, char to, char interim) {
	static int count = 0;
	count++;
	cout << "Count: " << count << endl;
	if (n_disks > 0) {
		tower(n_disks - 1, from, interim, to);
		cout << "Move disk " << n_disks << " from " << from << " to " << to << endl;
		tower(n_disks - 1, interim, to, from);
	}
}
