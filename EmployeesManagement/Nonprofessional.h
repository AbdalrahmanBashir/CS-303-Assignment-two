#pragma once
#include "Employee.h"
class Nonprofessional :
    public Employee
{
public:
    Nonprofessional() = default;
    Nonprofessional(const std::string& name, int id, double hourly_rate, int vacation_hours);
    // Override the virtual member functions from the base class
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDays() const override;

    void setHoursWorked(int hours);

private:
    double hourly_rate_;
    int vacation_hours_; // Vacation hours earned per year
    int hours_worked_; // Hours worked per week
};

