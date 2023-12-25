#include<iostream>
using namespace std;
class stu {
public:
	int grade;
	int id;
	stu(int g = 0, int n = 0);
};
stu::stu(int g, int n) {
	grade = g;
	id = n;
}
stu* max(stu* p) {
	stu* max = &p[0];
	for (int i = 1; i < 5; i++) {
		if (p[i].grade > max->grade) {
			max = &p[i];
		}
	}
	return max;
}
int main() {
	stu s1(99, 1);
	stu s2(85, 2);
	stu s3(74, 3);
	stu s4(95, 4);
	stu s5(56, 5);
	stu co[5] = { s1,s2,s3,s4,s5 };
	stu* top = max(co);
	cout << "the student with  the highest score is" <<" " << top->id;
	return 0;
}