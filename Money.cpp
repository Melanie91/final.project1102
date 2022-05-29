//Money.cpp
//2022.05.29 newest

#include "Money.h"
#include "Time.h"

#include <iostream>

using namespace std;

Money::Money(){ }

Money::Money(Time newTotalMinute)
{
	setTotalMinute(newTotalMinute);
}

Time Money::getTotalMinute()
{
	return totalminute;
}

void Money::setTotalMinute(Time newTotalMinute)
{
	totalminute = newTotalMinute;
}


void Money::countMoney(int totalminute)  //time
{
	if (totalminute == 0)
	{
		cout << "Total parking fee : NT 0 dollar." << endl;
	}
	else if (totalminute > 0 && totalminute < 4)  //2小時為4個半小時
	{
		cout << "Total parking fee : NT " << totalminute * 20 << " dollars." << endl;
	}
	else if (totalminute >= 4 && totalminute < 48) //24小時為48個半小時
	{
		cout << "Total parking fee : NT " << totalminute * 35 << " dollars." << endl;
	}
	else if (totalminute >= 48)
	{
		cout << "Total parking fee : NT 1500 dollars." << endl;
	}
}
