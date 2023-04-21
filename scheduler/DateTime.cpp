#include "DateTime.h"
#include "Date.h";
#include "Time.h";

DateTime::DateTime(Date* date, Time* time) {
	_date = date;
	_time = time;
}
std::string DateTime::ToString() {
	auto dateAsString = _date->ToString();
	auto timeAsString = _time->ToString();
	return  dateAsString + " " + timeAsString;
}

bool DateTime::operator<(DateTime* other) {
	return this->_date == other->_date ? this->_time < other->_time : this->_date < other->_date;
}