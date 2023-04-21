#pragma once

#include "Appointment.h";
#include "Date.h";
#include "Time.h";
#include "AppointmentType.h"
#include <string>;

class AppointmentFactory
{
public:
	Appointment* Create(AppointmentType type, Date* date, Time* time, std::string additionalData);

private:
	DateTime* CreateDateTime(Date* date, Time* time);
};

