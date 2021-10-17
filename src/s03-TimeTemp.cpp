#include <iostream>
#include <string>
#include "Time.h"

Time currentTime1(23, 59, 59);
bool runCheck = true;

std::string currentTimeOfDay;

auto Time::enum_to_string(Time::timeOfDay a) const -> std::string {

switch (a) {
    case timeOfDay::Morning:
        return "Morning";
    case timeOfDay::Noon:
        return "Noon";
    case timeOfDay::Afternoon:
        return "Afternoon";
    case timeOfDay::Evening:
        return "Evening";
    case timeOfDay::Night:
        return "Night";
}

}
auto Time::time_of_day() const -> std::string {

    if ((hour < 12) && (hour >= 6)){
        currentTimeOfDay = enum_to_string(timeOfDay::Morning);
    } else if (hour == 12) {
        currentTimeOfDay = enum_to_string(timeOfDay::Noon);
    } else if ((hour > 12) && (hour < 17)) {
        currentTimeOfDay = enum_to_string(timeOfDay::Afternoon);
    } else if ((hour >= 17) && (hour < 20)) {
        currentTimeOfDay = enum_to_string(timeOfDay::Evening);
    } else {
        currentTimeOfDay = enum_to_string(timeOfDay::Night);
    }

    return currentTimeOfDay;
}

//TODO: print in the format 00, 01 etc.

auto Time::next_hour() -> void {
    hour++;
    if (hour >= 24) {
        hour = 0;
    }
}

auto Time::next_minute() -> void {
    minute++;
    if (minute > 59) {
        minute = 0;
        hour++;
        if (hour >= 24) {
            hour = 0;
        }
    }
}

auto Time::next_second() -> void {
    second++;
    if (second > 59) {
        second = 0;
        minute++;
        if (minute > 59) {
            minute = 0;
            hour++;
            if (hour >= 24) {
                hour = 0;
            }
        }
    }
}

//TODO: define the rest of the functions

auto Time::operator+ (Time const &input3) const -> Time{
    int nHour, nMinute, nSecond;
    nHour = currentTime1.hour + input3.hour;
    nMinute = currentTime1.minute + input3.minute;
    nSecond = currentTime1.second + input3.second;

    Time resultTime(nHour, nMinute, nSecond);

    if (nHour > 23) {
        resultTime.hour = input3.hour - 1;
    }

    if (nMinute > 59) {
        resultTime.minute = input3.minute - 1;
    }

    if (nSecond > 59) {
        resultTime.second = input3.second - 1;
    }

    currentTime1 = resultTime;
    return resultTime;
}

/*auto Time::operator- ( Time const &input3) const -> Time {
    int nHour, nMinute, nSecond;
    nHour = currentTime1.hour - input3.hour;
    nMinute = currentTime1.minute - input3.minute;
    nSecond = currentTime1.second - input3.second;

    Time resultTime(nHour, nMinute, nSecond);

    if (nHour < 0) {
        resultTime.hour = 0 - (resultTime.hour - )
    }

    if (nMinute > 59) {
        resultTime.minute = input3.minute - 1;
    }

    if (nSecond > 59) {
        resultTime.second = input3.second - 1;
    }

    currentTime1 = resultTime;
    return resultTime;
}
auto operator < ( Time const &) const -> bool ;
auto operator > ( Time const &) const -> bool ;
auto operator == ( Time const &) const -> bool ;
auto operator != ( Time const &) const -> bool ;*/


auto Time::to_string() const -> std::string {

    std::cout << hour << ":" << minute << ":" << second << std::endl;

    std::cout << "It is now ";
    std:: cout << time_of_day();
    std::cout << '\n' << std::endl;

    std::string input;
    std::cout << "Extend time by 1 hour, minute, or second? Type hour, minute, or second (or term to terminate). Type op to switch to operator commands: " << std::endl;
    std::cin >> input;

    if (input == "hour") {

        std::cout << "Next hour: ";
        currentTime1.next_hour();

    } else if (input == "minute") {

        std::cout << "Next minute: ";
        currentTime1.next_minute();

    } else if (input == "second") {

        std::cout << "Next second: ";
        currentTime1.next_second();

    } else if (input == "term") {

        runCheck = false;

    } else if (input == "op") {

        int iHour, iMinute, iSecond;
        std::string operatorStr;


        std::cout << "Enter the hour value you wish to compare to the current time: " << std::endl;
        std::cin >> iHour;
        if (iHour > 23) {
            std::cout << "Invalid input. Please enter a value up to 23.";
        }
        std::cout << "Enter the minute value you wish to compare to the current time: " << std::endl;
        std::cin >> iMinute;
        if (iMinute > 59) {
            std::cout << "Invalid input. Please enter a value up to 59.";
        }
        std::cout << "Enter the second value you wish to compare to the current time: " << std::endl;
        std::cin >> iSecond;
        if (iSecond > 59) {
            std::cout << "Invalid input. Please enter a value up to 59.";
        }

        Time inputTime(iHour, iMinute, iSecond);

        std::cout << "Please enter an operator: " << std::endl;
        std::cin >> operatorStr;

        if (operatorStr == "+") {
            operator+(inputTime);

        } else {
            std::cout << "Invalid operator." << std::endl;
        }

    } else {
        std::cout << "Invalid input." << std::endl;

    }

    return " ";

}

auto main () -> int {

    while (runCheck) {
        std::cout << currentTime1.to_string() << std::endl;
    }


}
