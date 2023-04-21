#pragma once

#include "Appointment.h";
#include <string>;

class InformalAppointment : public Appointment
{
public:
	InformalAppointment(std::string additionalData, DateTime* dateTime);
	std::string DisplayInformation();
};

