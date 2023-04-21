#pragma once

#include <string>;

class Time
{
public:
	Time(int hour, int minutes);
	std::string ToString();
	bool operator < (Time* other);
private:
	int _hour;
	int _minutes;
};

