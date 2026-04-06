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
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)return 30;
    else if (month == 2)return isLeapYear() ? 29 : 28;
    
    return 0;
}

void Date::nextDate()
{
    if (day == 31 && month == 12)
    {
        day = 1; month = 1; year++;
    }
    else if (day == monthDays())
    {
        day = 1; month++;
    }
    else day++;
}

void Date::prevDate()
{
    if (day == 1 && month == 1)
    {
        day = 31; month = 12; year--;
    }
    else if (day == 1)
    {
        month--; day = monthDays();
    }
    else day--;
}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getYear() const
{
    return year;
}

void Date::setMonth(int month)
{
    if (month >= 1 && month <= 12)
    {
        this->month = month;
    }
}

int Date::getMonth() const
{
    return month;
}

void Date::setDay(int day)
{
    if (day >= 1 && day <= monthDays())
    {
        this->day = day;
    }
}

int Date::getDay() const
{
    return day;
}

void Date::showDate() const
{
    cout << day / 10 << day % 10 << " ." << month / 10 << month % 10 << " ." << year << endl;
}

bool Date::valid() const
{
    return (month>=1 && month<=12 && day>=1 && day<=monthDays());
}
