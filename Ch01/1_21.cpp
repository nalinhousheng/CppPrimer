#include<iostream>
#include"Sales_item.h"
using namespace std;

int main() {
	Sales_item item1, item2;
	cin >> item1 >> item2;
	//���ISBN�Ƿ���ͬ
	if (item1.isbn != item2.isbn) {
		cerr << "Data must refer to same ISBN." << endl;
		return -1;
	}
	cout << item1 + item2 << endl;
	return 0;
}