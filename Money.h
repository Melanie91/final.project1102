#ifndef MONEY_H
#define MONEY_H

#include <iostream>

using namespace std;

class Money
{
public:
 Money();
 Money(int);
 //把Time.cpp裡countTimeMoney()算出來的值傳入
 
 int getTotalMinute();
 int getMoney();
 void setTotalMinute(int);
 void setMoney(int);

 int countMoney(); //算停車費

private:
 int totalminute;
 int money;
};

#endif
