#ifndef DATE_HPP
#define DATE_HPP

#include <string>

#include <ctime>

std::string GetCurrentDate();

bool IsValidDate(std::string date);

bool IsValidTime(std::string time);

#endif