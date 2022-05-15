#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()
{
	hour1 = 0;
	minute1 = 0;
	hour2 = 0;
	minute2 = 0;
}

Time::Time(int newHour1, int newMinute1, int newHour2, int newMinute2 )
{
	hour1 = newHour1;
	minute1 = newMinute1;
	hour2 = newHour2;
	minute2 = newMinute2;
}

// time1

int Time::getHour1()
{
	return hour1;
}

int Time::getMintue1()
{
	return minute1;
}

void Time::setHour1(int newHour1)
{
	hour1 = newHour1;
}

void Time::setMintue1(int newMinute1)
{
	minute1 = newMinute1;
}

// time2

int Time::getHour2()
{
	return hour2;
}

int Time::getMintue2()
{
	return minute2;
}

void Time::setHour2(int newHour2)
{
	hour2 = newHour2;
}

void Time::setMintue2(int newMinute2)
{
	minute2 = newMinute2;
}

// count time

int Time::countTime() //計算總共停多久
{
	cout << "總共的停車時間:" << (hour2 * 60 + minute2 - hour1 * 60 - minute1) / 60 << " 小時 "
		<< (hour2 * 60 + minute2 - hour1 * 60 - minute1) % 60 << " 分鐘 " << endl;
}

int Time::countTimeMoney() //便利算錢的時間
{

	return hour2 * 60 + minute2 - hour1 * 60 - minute1;
}
