#define _CRT_SECURE_NO_WARNINGS
#include "Data.h"
#include <iostream>
#include <ctime>
using namespace std;

void Data::data()
{
	time_t tt = time(NULL);
	tm *t = localtime(&tt);
	cout << t->tm_hour << "/"
		<< t->tm_min << "/"
		<< t->tm_sec << endl;
}


