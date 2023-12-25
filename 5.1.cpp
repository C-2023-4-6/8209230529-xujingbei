#include<iostream>
using namespace std;
class Time           
{
private:              
		int hour;
	    int minute;
	    int sec;
public:	
		void seTime(int h, int min, int s)
		{
			 hour=h; minute =min; sec = s;
		}
		void showTime() {
			cout << hour << ":" << minute << ":" << sec;
		}
};
int main()
{   
	Time tl;
	int h,m,s;
	cin >> h >> m >> s;
	tl.seTime(h, m, s);
	tl.showTime();
	return 0;
}
