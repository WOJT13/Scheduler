#pragma once

#include "Appointment.h";
#include <string>;
#include "DateTime.h";

class FormalAppointment : public Appointment
{
public:
	FormalAppointment(std::string additionalData, DateTime* dateTime);
	std::string DisplayInformation();
};

