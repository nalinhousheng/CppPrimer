#include<iostream>
using namespace std;

int main() {
	//currVal������ͳ�Ƶ��������������ֵ����val
	int currVal = 0, val = 0;
	//��ȡ��һ����
	if (cin >> currVal) {
		int cnt = 1;//��ǰֵ�ĸ���
		while (cin >> val) {//��ȡʣ�����
			if (val == currVal) {//������
				++cnt;//������һ
			}
			else {//�����ӡǰһ��ֵ�ĸ���
				cout << currVal << " occurs " << cnt << " times" << endl;
				currVal = val;//��ȡ����
				cnt = 1;
			}
		}
		//��ӡ���һ��ֵ�ĸ���
		cout << currVal << " occurs " << cnt << " times" << endl;
	}
	return 0;
}