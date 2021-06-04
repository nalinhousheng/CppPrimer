#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string str1 = "str1", str2 = "str2";
	if (str1 == str2) cout << "same string." << endl;
	else cout << "different string." << endl;
	const char* ch1 = "ch1", *ch2 = "ch2";
	if (strcmp(ch1, ch2)==0) cout << "same string." << endl;
	else cout << "different string." << endl;
	return 0;
}