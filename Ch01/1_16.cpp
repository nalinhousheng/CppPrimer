#include<iostream>
using namespace std;

int main() {
	int sum = 0, value = 0;
	cout << "Enter some numbers:" << endl;
	while (cin >> value) {
		sum += value;
	}
	cout << sum << endl;
	return 0;
}