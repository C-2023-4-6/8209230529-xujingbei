#include<iostream>
using namespace std;
int com(int c, int d) {
	int i=d;
	if (c % d == 0)
	{
		i = d;
	}
	else if (c % d != 0)
	{
		for (int i = d;; i--)
		{
			if (c % i == 0 && d % i == 0)
			{
				break;
			}
		}		
	}
	return i;
          }
int mai(int& c, int& d)
{
	if (c % d == 0)
	{
		cout << "最大公约数为" << d << endl;
		cout << "最小公倍数为" << c << endl;
	}
	else if (c % d != 0)
	{
		for (int i = d;; i--)
		{
			if (c % i == 0 && d % i == 0)
			{
				cout << "最大公约数是：" << i << endl;
				break;
			}
		}
		for (int t = c;; t++)
		{
			if (t % c == 0 && t % d == 0)
			{
				cout << "最小公倍数是：" << t << endl;
				break;
			}
		}
	}
	return 0;
}
int main()
{ 
	cout<< "请输入两个数：" << endl;
	int m, n;
	cin >> m >> n;
	int& a= m;
	int& b = n;
	mai(a, b);














	return 0;
}