#include<iostream>
using namespace std;

int main() {
	int v1 = 0, v2 = 0;
	cout << "Enter two numbers:" << endl;
	cin >> v1 >> v2;
	int value = v1;
	while (value <= v2) {
		cout << value << endl;
		++value;
	}
	return 0;
}