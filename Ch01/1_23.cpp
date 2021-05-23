#include<iostream>
#include"Sales_item.h"
using namespace std;

int main() {
	Sales_item curr;
	int cnt = 1;
	if (cin >> curr) {
		Sales_item val;
		while (cin >> val) {
			if (curr.isbn == val.isbn) {
				++cnt;
			}
			else {
				cout << curr << " occurs " << cnt << " times " << endl;
				curr = val;
				cnt = 1;
			}
		}
	}
	cout << curr << " occurs " << cnt << " times " << endl;
	return 0;
}