#pragma once

#include <string>;
#include "DateTime.h";

class Appointment
{
public:
	virtual std::string DisplayInformation();
	DateTime* GetDateTime();
protected:
	std::string additionalData;
	DateTime* dateTime;
	Appointment(std::string additionalData, DateTime* dateTime);
};

