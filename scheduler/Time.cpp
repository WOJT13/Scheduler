#include "Time.h"
#include <string>;

Time::Time(int hour, int minutes) {
	_hour = hour;
	_minutes = minutes;
}

std::string Time::ToString() {
	auto hourAsString = std::to_string(_hour);
	auto minutesAsString = std::to_string(_minutes);
	return hourAsString + ":" + minutesAsString;
}

bool Time::operator<(Time* other) {

	return this->_hour == other->_hour ? this->_minutes < other->_minutes : this->_hour < other->_hour;
}

