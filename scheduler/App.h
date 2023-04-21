#pragma once

#include "Console.h";
#include "Appointment.h";
#include "AppointmentFactory.h";
#include <list>;

class App
{
public:
	void Run();
	App();

private: 
	Console* _console;
	AppointmentFactory* _appointmentFactory;
	std::list<Appointment*> _appointments;
	void SortAppointments();
	void CreateAppointment();
	void DisplayAppointments();
};

