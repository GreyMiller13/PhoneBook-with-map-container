#pragma once
#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;

	Date() {}
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	string toString() {
		string temp = toString(day) + "." + toString(month) + "." + toString(year);
		return temp;
	}
};
