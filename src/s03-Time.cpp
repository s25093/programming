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

auto Time::to_string() const -> std::string {

    std::cout << hour << ":" << minute << ":" << second << std::endl;

    std::cout << "It is now ";
    std:: cout << time_of_day();
    std::cout << '\n' << std::endl;

    std::string input;
    std::cout << "Extend time by 1 hour, minute, or second? Type hour, minute, or second (or term to terminate): " << std::endl;
    std::getline(std::cin, input);

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
