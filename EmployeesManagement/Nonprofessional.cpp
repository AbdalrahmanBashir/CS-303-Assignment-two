#include "Nonprofessional.h"
Nonprofessional::Nonprofessional(const std::string& name, int id, double hourly_rate, int vacation_hours)
	
	: Employee(name, id), hourly_rate_(hourly_rate), vacation_hours_(vacation_hours), hours_worked_(0) {}

double Nonprofessional::calculateWeeklySalary() const
{
	return hours_worked_ * hourly_rate_;
}

double Nonprofessional::calculateHealthCareContributions() const
{
	return hourly_rate_ * hours_worked_ * 0.12;
}

int Nonprofessional::calculateVacationDays() const
{
	return vacation_hours_ / 10;
}

void Nonprofessional::setHoursWorked(int hours)
{
	hours_worked_ = hours;
}