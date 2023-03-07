#pragma once
#include "Employee.h"
class Professional :
    public Employee 
{
public:
    Professional() = default;
    Professional(const std::string& name, int id, double monthly_salary, int vacation_days);

    // Override the virtual member functions from the base class
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDays() const override;

private:
    double monthly_salary_;
    int vacation_days_;
};

