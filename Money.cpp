#include "Money.h"
#include <iostream>

using namespace std;

Money::Money()
{
 setTotalMinute(0);
 setMoney(0);
}

Money::Money(int newTotalMinute)
{
 setTotalMinute(newTotalMinute);
}


int Money::getTotalMinute()
{
 return totalminute;
}

int Money::getMoney()
{
 return money;
}

void Money::setTotalMinute(int newTotalMinute)
{
 totalminute = newTotalMinute;
}

void Money::setMoney(int newMoney)
{
 money = newMoney;
}



int Money::countMoney()
{
 int temp = totalminute / 30; //以半小時計算(30分鐘)取整數

 if (temp == 0)
 {
  setMoney(0);   //money = 0;
 }
 else if (temp > 0 && temp < 4)  //2小時為4個半小時
 {
  setMoney(temp * 20);  //money = temp*20;
 }
 else if (temp >= 4 && temp < 48) //24小時為48個半小時
 {
  setMoney(temp * 35);  //money = temp*35;
 }
 else if (temp >= 48)
 {
  setMoney(1500);   //money = 1500;
 }

 cout << "總共需付款:" << getMoney() << "元" << endl;
}
