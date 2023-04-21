#include "InformalAppointment.h"

InformalAppointment::InformalAppointment(std::string additionalData, DateTime* dateTime) : Appointment(additionalData, dateTime) {
}

std::string InformalAppointment::DisplayInformation() {
	return "Informal appointment!";
}