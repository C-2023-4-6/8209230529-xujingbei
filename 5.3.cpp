#include<iostream>
using namespace std;
class cft {
public:
	int h;
	int l;
	int w;
	void set() {
		cout << "�����볤��ߣ�" << endl;
		cin >> h >> l >> w;
	}
	int ver(int he,int le,int wi) {
		int v;
		v = he * le * wi;
		return v;
	}
	void show() {
		cout << "���Ϊ��" << ver(h,l,w) << endl;
	}
};
int main() {
	cft t1, t2, t3;
	t1.set();
	t1.show();
	t2.set();
	t2.show();
	t3.set();
	t3.show();
	return 0;
}