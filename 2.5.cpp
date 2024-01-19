#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100);
	int len = strlen(a);
	int num=0;//数字的数量
	int let=0;//字母的数量
	int oth=0;//其他字符的数量
	for (int i = 0; i <= len - 1;i++) {
		if(a[i]>='0'&&a[i]<='9')
		{
			num++;
		}
		else if(a[i]>='A'||a[i]<='Z')
		{
			let++;
		}
		else if(a[i]>='a'||a[i]<='z')
		{
			let++;
		}
		else { oth++; }



	}
	cout << "数字的数量为： " << num << endl;
	cout << "字母的数量为： " << let << endl;
	cout << "其他字符的数量为： " << oth << endl;



	return 0;
}