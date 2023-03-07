#include "Professional.h"
Professional::Professional(const std::string& name, int id, double monthly_salary, int vacation_days)
    : Employee(name, id), monthly_salary_(monthly_salary), vacation_days_(vacation_days) {
}

double Professional::calculateWeeklySalary() const {
    double yearly = (monthly_salary_ * 12);

    return yearly / 52; //52 weeks in one year
}

double Professional::calculateHealthCareContributions() const {
    return monthly_salary_ * 0.12; // assume 12% contribution rate
}

int Professional::calculateVacationDays() const {
    return vacation_days_ / 12; // assume 12 months in a year
}