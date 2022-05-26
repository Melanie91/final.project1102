# final.project1102

#include <iostream>
#include <string>

#include "Money.h"
#include "Time.h"
#include <string>
using namespace std;

int main() {
	string number;
	int h1, h2, m1, m2;

	cout << "Please enter your car number: " << endl;
	cin >> number;

	cout << "Please enter your total parking time: " << endl;
	cin >> h1 >> h2 >> m1 >> m2;

	Time t1;
	Time t2;
	Time t(t2);
	//Time (h1, m1);

	t1.setHour1(h1);
	t1.setMintue1(m1);

	t2.setHour2(h2);
	t2.setMintue2(m2);

	t.countTime();
	//t.countTime(t2);

	Money c1;
	c1.countMoney();

}
