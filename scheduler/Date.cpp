#include "Date.h"

Date::Date(int day, int month, int year) {
	_day = day;
	_month = month;
	_year = year;
}

std::string Date::ToString() {
	auto dayAsString = std::to_string(_day);
	auto monthAsString = std::to_string(_month);
	auto yearAsString = std::to_string(_year);
	return dayAsString + " " + monthAsString + " " + yearAsString;
}

bool Date::operator<(Date* other) {
	if (this->_year < other->_year)
		return true;
	if (this->_month < other->_month)
		return true;
	if (this->_day < other->_day)
		return true;
	return false;
}

bool Date::operator==(Date* other) {
	return this->_year == other->_year
		&& this->_month == other->_month
		&& this->_day == other->_day;
}