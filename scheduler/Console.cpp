#include <iostream>
#include <string>
#include "UserOptions.h"
#include "Console.h"
#include "AppointmentType.h"

void Console::Greet() {
	DisplayStringAndNewLine("Hello!");
}

void Console::Bye() {
	DisplayStringAndNewLine("Bye!");
}

void Console::DisplayOptions() {
	DisplayStringAndNewLine("1.) Create appointment");
	DisplayStringAndNewLine("2.) Display appointments");
	DisplayStringAndNewLine("3.) Exit");
	// TODO: jak starczy czasu dorobic update / delete
}

void Console::DisplayAppointment(Appointment* appointment) {
	DisplayStringAndNewLine(appointment->DisplayInformation());
	auto dateTime = appointment->GetDateTime();
	DisplayStringAndNewLine(dateTime->ToString());
	DisplayStringAndNewLine("");
}

void Console::DisplayEmptyLine() {
	DisplayStringAndNewLine("");
}

UserOptionEnum Console::GetOption() {
	auto intEnumValue = this->Get<int>();
	return static_cast<UserOptionEnum>(intEnumValue);
}

AppointmentType Console::GetAppointmentType() {
	DisplayStringAndNewLine("1. Formal 2. Informal");
	auto intEnumValue = this->Get<int>();
	return static_cast<AppointmentType>(intEnumValue);
}

Date* Console::GetDate() {
	DisplayStringAndNewLine("Input day:");
	auto day = Get<int>();
	DisplayStringAndNewLine("Input month:");
	auto month = Get<int>();
	DisplayStringAndNewLine("Input year:");
	auto year = Get<int>();
	return new Date(day, month, year);
}

Time* Console::GetTime() {
	DisplayStringAndNewLine("Input hour:");
	auto hour = Get<int>();
	DisplayStringAndNewLine("Input minutes:");
	auto minutes = Get<int>();
	return new Time(hour, minutes);
}

std::string Console::GetAdditionalData() {
	return DisplayAndGet<std::string>("Input additional appoinment data: ");
}

void Console::DisplayStringAndNewLine(std::string value) {
	std::cout << value << std::endl;
}

template<typename T> T Console::Get() {
	T userInput;
	std::cin >> userInput;
	return userInput;
}

template<typename T> T Console::DisplayAndGet(std::string text) {
	DisplayStringAndNewLine(text);
	return Get<T>();
}

Console::Console() {
}