#include<iostream>
using namespace std;
void chan(int* p, int t) {
	bool changed = 1;
	do {
		changed = 0;
		for (int i = 0; i < t-1; i++)
		{
			if (p[i] > p[i + 1]) {
				swap(p[i], p[i + 1]);
				changed = 1;
			}		
		}	
	} while (changed);	
	for (int i = 0; i < t; i++)
	{
		cout << p[i] << " ";
	}	
}
int main() {
	int t;
	cout << "请输入数组元素数：" << endl;
	cin >> t;
	int* p = new int[t];
	cout << "请输入数据:" << endl;
	for (int i = 0; i < t; i++) {
		cin >> p[i];
	}
	/*cout << p << endl;
	cout << p + 1 << endl;
	chan(p, t);*/
	chan(p, t);
	delete[]p;










	return 0;
}