#ifndef DATE_CPP
#define DATE_CPP

#include "Date.hpp"

std::string GetCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::string year = std::to_string(1900 + ltm->tm_year);
    std::string month = std::to_string(1 + ltm->tm_mon);
    std::string day = std::to_string(ltm->tm_mday);

    if (month.length() == 1)
        month = "0" + month;

    if (day.length() == 1)
        day = "0" + day;

    return year + "-" + month + "-" + day;
}

bool IsValidDate(std::string date) {
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);

    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
        return false;


    for (int i = 0; i < 4; i++)
        if (year[i] < '0' || year[i] > '9')
            return false;

    for (int i = 0; i < 2; i++)
        if (month[i] < '0' || month[i] > '9')
            return false;

    for (int i = 0; i < 2; i++)
        if (day[i] < '0' || day[i] > '9')
            return false;

    int yearInt = std::stoi(year);
    int monthInt = std::stoi(month);
    int dayInt = std::stoi(day);

    if (yearInt < 0 || monthInt < 0 || dayInt < 0)
        return false;

    if (monthInt > 12)
        return false;


    if (dayInt > 31)
        return false;

    if (monthInt == 2) {
        if (dayInt > 29)
            return false;

        if (dayInt == 29)
            if (yearInt % 4 != 0 && (yearInt % 100 != 0 || yearInt % 400 == 0))
                return false;
    }

    if (monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11)
        if (dayInt > 30)
            return false;

    return true;
}

bool IsValidTime(std::string time) {
    if (time.length() != 5)
        return false;

    if (time[2] != ':')
        return false;

    std::string hour = time.substr(0, 2);
    std::string minute = time.substr(3, 2);

    if (hour.length() != 2 || minute.length() != 2)
        return false;

    for (int i = 0; i < 2; i++)
        if (hour[i] < '0' || hour[i] > '9')
            return false;

    for (int i = 0; i < 2; i++)
        if (minute[i] < '0' || minute[i] > '9')
            return false;

    int hourInt = std::stoi(hour);
    int minuteInt = std::stoi(minute);

    if (hourInt < 0 || minuteInt < 0)
        return false;

    if (hourInt > 23 || minuteInt > 59)
        return false;

    return true;
}

#endif