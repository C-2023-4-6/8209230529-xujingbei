#include<iostream>
using namespace std;
int parseHex(char*s) {
	int len = strlen(s);
	int x=0;
	for (int i = 0; i < len; i++)
	{
		char c = toupper(s[len - 1 - i]);
		if (c >= '0' && c <= '9') {
			x += (c - '0') * pow(16, i);
		}
		else if (c >= 'A' && c <= 'F')
		{
			x += (c - 'A' + 10) * pow(16, i);
		}
	}
	return x;
}
int main(){
	char* s=new char[20];
	cout << "������һ��16���Ƶ�����" << endl;
	cin.getline(s, 20);
	cout <<"����ʮ����Ϊ�� " << parseHex(s);
	delete[]s;
	return 0;
}
