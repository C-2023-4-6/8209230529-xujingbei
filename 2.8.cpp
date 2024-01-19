#include<iostream>
using namespace std;
int main() {
	double a,i;
	cout << "请输入一个数：" << endl;
	cin >> a;
	for (double b=a;;b=i)
	{
		double  t;
		i = (b + a/b)/2;
		t = fabs(i - b);
		if (t < 0.00001)
		{
			cout << "它的平方根约为：" << i;
			break;
		}
		
		





	}







	return 0;
}