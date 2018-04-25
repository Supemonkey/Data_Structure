#include "Time.h"
#define _CRT_SECURE_NO_WARNINGS
#include "Data.h"
#include <iostream>
#include <ctime>
using namespace std;
Time::Time()
{
	time_t tt = time(NULL);
	tm *t = localtime(&tt);
	cout << t->tm_hour << "/"
		<< t->tm_min << "/"
		<< t->tm_sec << endl;
}

Time::Time(int hour, int min, int sec)
{
	cout <<hour<< "/"
		<<min << "/"
		<< sec<< endl;
}