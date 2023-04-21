#include "App.h"
#include "Console.h";

App::App() {
    _console = new Console();
    _appointmentFactory = new AppointmentFactory();
}

void App::Run() {
    _console->Greet();
    auto selectedOption = UserOptionEnum::Exit;

    do {
        _console->DisplayOptions();
        selectedOption = _console->GetOption();
        switch (selectedOption)
        {
        case UserOptionEnum::AddAppointment:
            CreateAppointment();
            break;
        case UserOptionEnum::DisplayAppointments:
            DisplayAppointments();
            break;
        default:
            break;
        }
    } while (selectedOption != UserOptionEnum::Exit);
    _console->Bye();
}

void App::CreateAppointment() {
    auto typeOfAppointment = _console->GetAppointmentType();
    auto dateOfAppointment = _console->GetDate();
    auto timeOfAppointment = _console->GetTime();
    auto additionalDataOfAppointment = _console->GetAdditionalData();
    auto appointment = _appointmentFactory->Create(typeOfAppointment, dateOfAppointment, timeOfAppointment, additionalDataOfAppointment);
    _appointments.push_back(appointment);
    this->SortAppointments();
}

void App::SortAppointments() {
    _appointments.sort([](Appointment* a, Appointment* b) {
        return a->GetDateTime() < b->GetDateTime();
    });
}

void App::DisplayAppointments() {
    for (auto app = _appointments.begin(); app != _appointments.end(); app++)
        _console->DisplayAppointment(*app);
}