#include "Appointment.h"
#include <string>;

DateTime* Appointment::GetDateTime() {
	return this->dateTime;
}

std::string Appointment::DisplayInformation() {
	return "Im just a basic appointment!";
}

Appointment::Appointment(std::string additionalData, DateTime* dateTime) {
	this->additionalData = additionalData;
	this->dateTime = dateTime;
}