#include "AppointmentFactory.h"
#include "FormalAppointment.h";
#include "InformalAppointment.h";
#include <string>;

Appointment* AppointmentFactory::Create(AppointmentType type, Date* date, Time* time, std::string additionalData) {
	switch (type)
	{
	case AppointmentType::Formal:
		return new FormalAppointment(additionalData, this->CreateDateTime(date, time));
	case AppointmentType::Informal:
		return new InformalAppointment(additionalData, this->CreateDateTime(date, time)); 
	default:
		throw "Unsupported appointment type!";
	}
}

DateTime* AppointmentFactory::CreateDateTime(Date* date, Time* time) {
	return new DateTime(date, time);
}