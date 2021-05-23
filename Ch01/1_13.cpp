#include<iostream>
using namespace std;

int main() {
	int v1 = 0, v2 = 0;
	cout << "Enter two numbers:" << endl;
	cin >> v1 >> v2;
	for (int value = v1; value <= v2; ++value) {
		cout << value << endl;
	}
	return 0;
}