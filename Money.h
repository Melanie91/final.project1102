//Money.h

#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include "Time.h"

using namespace std;

class Money
{
public:
	Money();
	Money(Time);
	//把Time.cpp裡countTimeMoney()算出來的值傳入

	Time getTotalMinute();

	void setTotalMinute(Time);
	void countMoney(int); //算停車費

private:
	//int money;
	Time totalminute;
};

#endif
