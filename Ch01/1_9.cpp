#include<iostream>
using namespace std;

int main() {
	int val = 50, sum = 0;
	while (val <= 100) {
		sum += val;
		++val;
	}
	cout << sum << endl;
	return 0;
}