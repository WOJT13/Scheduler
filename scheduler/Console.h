#pragma once

#include <string>
#include "UserOptions.h";
#include "AppointmentType.h"
#include "Date.h";
#include "Time.h";
#include "Appointment.h";

class Console
{
public:
	void Greet();
	void Bye();
	void DisplayOptions();
	void DisplayAppointment(Appointment* appointment);
	void DisplayEmptyLine();
	UserOptionEnum GetOption();
	AppointmentType GetAppointmentType();
	Time* GetTime();
	Date* GetDate();
	std::string GetAdditionalData();
	Console();

private:
	void DisplayStringAndNewLine(std::string value);
	template<typename T> T Get();
	template<typename T> T DisplayAndGet(std::string text);
};


