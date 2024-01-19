#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	c = max(a, b);
	d = min(a, b);//c为较大的数
	if(c%d==0)
	{
		cout << "最大公约数为" << d << endl;
		cout << "最小公倍数为" << c<< endl;
	}
	else if (c % d != 0)
	{
		for (int i = d;; i--)
		{
			if (c % i == 0 && d % i == 0)
			{
				cout <<"最大公约数是：" << i << endl;
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