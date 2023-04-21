#include "FormalAppointment.h"
#include <string>;
#include "DateTime.h";

FormalAppointment::FormalAppointment(std::string additionalData, DateTime* dateTime) : Appointment(additionalData, dateTime) {
}

std::string FormalAppointment::DisplayInformation() {
	return "Formal appointment!";
}