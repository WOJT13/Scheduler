#pragma once
#include "Date.h";
#include "Time.h";
#include <string>;
#include "DateTime.h";

class DateTime
{
public:
	DateTime(Date* date, Time* time);
	std::string ToString();
	bool operator < (DateTime* other);
private:
	Time* _time;
	Date* _date;
};

