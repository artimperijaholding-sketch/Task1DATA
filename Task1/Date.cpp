#include "Date.h"

Date::Date()
{
    tm* info = new tm;
    auto curent = time(0);
    localtime_s(info, &curent );
    //info = localtime(&curent);// CLION
    year = info->tm_year + 1900;
    month = info->tm_mon + 1;
    day = info->tm_mday;
    delete info;
}

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

bool Date::isLeapYear() const
{
    if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) return true;
    else
    return false;
}

int Date::monthDays() const
{
    return 0;
}

void Date::nextDate()
{
}

void Date::prevDate()
{
}

void Date::setYear(int year)
{
}

int Date::getYear() const
{
    return 0;
}

void Date::setMonth(int month)
{
}

int Date::getMonth() const
{
    return 0;
}

void Date::setDay(int day)
{
}

int Date::getDay() const
{
    return 0;
}

void Date::showDate() const
{
}

bool Date::valid() const
{
    return false;
}
