#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b)
		cout << "这无法构成一个三角形" << endl;
	else if (a == b || c == a || b == c)
		cout << "这是一个等腰三角形," << "这个三角形的周长为： " << a + b + c << endl;
	else
		cout<< "这个三角形的周长为： " << a + b + c << endl;
	return 0;

	    


}