#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	const char cha1[] = "cha1", cha2[] = "cha2";
	char* cha3 = new char[strlen(cha1) + strlen(" ") + strlen(cha2) + 1];
	strcpy(cha3, cha1);
	strcpy(cha3, " ");
	strcpy(cha3, cha2);
	cout << cha3 << endl;
	return 0;
}