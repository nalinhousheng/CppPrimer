#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string largeStr;
	while (cin >> str) {
		/*���Ӷ���ַ���
		largeStr+=str;
		*/
		//�ָ�����ַ���
		if (largeStr.empty()) largeStr += str;
		else largeStr += ' ' + str;
	}
	cout << largeStr << endl;
	return 0;
}