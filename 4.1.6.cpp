#include<iostream>
using namespace std;
void count(char s[], int counts[]) {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 26; j++) {
			if (int(s[i]) - 97 == j||int(s[i])-65==j) { counts[j]++; }
		}
	 }
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			cout <<char(i+97)<<" " << counts[i] << " " << "times" << endl;
		}
	}
}
int main() {
	char s[100];
	cout << "enter a string:" << endl;
	cin.getline(s, 100);
	int counts[26];
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	count(s, counts);
	return 0;
}