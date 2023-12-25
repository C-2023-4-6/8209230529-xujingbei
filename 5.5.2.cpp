#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point() {
		x = 60;
		y = 80;
	}
	void set(int a, int b) {
		x = x + a;
		y = y + b;
	}
	void display() {
		cout << "(" << x << "," << y << ")";
	}
};
int main() {
	point t;
	int a, b;
	cin >> a >> b;
	t.set(a, b);
	t.display();
	return 0;
}