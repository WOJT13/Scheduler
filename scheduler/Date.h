#pragma once

#include <string>;

class Date
{
public:
	Date(int day, int month, int year);
	std::string ToString();
	bool operator <(Date* Date);
	bool operator ==(Date* other);
private:
	int _day;
	int _month;
	int _year;
};

