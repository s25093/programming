#include <iostream>
#include <string>
#include "Time.h"
#include <iomanip>

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

auto Time::operator+ (Time &input3)  -> Time{
    int nHour, nMinute, nSecond;
    nHour = currentTime1.hour + input3.hour;
    nMinute = currentTime1.minute + input3.minute;
    nSecond = currentTime1.second + input3.second;

    if (nSecond > 59) {
        nSecond = input3.second - 1;
        nMinute++;
    }

    if (nMinute > 59) {
        nMinute = input3.minute + 1;
        nHour++;
    }

    if (nHour > 23) {
        nHour = input3.hour;
    }

    Time resultTime(nHour, nMinute, nSecond);

    currentTime1 = resultTime;
    return resultTime;
}

auto Time::operator- (Time &input3) -> Time {

    int nHour, nMinute, nSecond;
    nHour = currentTime1.hour - input3.hour;
    nMinute = currentTime1.minute - input3.minute;
    nSecond = currentTime1.second - input3.second;

    if (nSecond < 0) {
        nSecond = 60 - (input3.second - currentTime1.second);
        nMinute--;
    }

    if (nMinute < 0) {
        nMinute = 59 - (input3.minute - currentTime1.minute);
        nHour--;
    }

    if (nHour < 0) {
        nHour = 23 - (input3.hour - currentTime1.hour);
    }

    Time resultTime(nHour, nMinute, nSecond);

    currentTime1 = resultTime;
    return resultTime;
}

auto Time::operator< (Time &input3) -> bool {

    if (input3.hour <  currentTime1.hour) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " < " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else if (input3.minute < currentTime1.minute) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " < " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else if (input3.second < currentTime1.second) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " < " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " !< " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return false;
    }
}
auto Time::operator> (Time &input3) -> bool {

    if (input3.hour >  currentTime1.hour) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " > " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else if (input3.minute > currentTime1.minute) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " > " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else if (input3.second > currentTime1.second) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " > " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " !> " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return false;
    }
}

auto Time::operator== (Time &input3) -> bool {
    if ((input3.hour == currentTime1.hour) &&
            (input3.minute == currentTime1.minute) &&
            (input3.second == currentTime1.second)) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " == " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    } else {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " !(==) " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return false;
    }
}

auto Time::operator!= ( Time &input3) -> bool {
    if ((input3.hour == currentTime1.hour) &&
        (input3.minute == currentTime1.minute) &&
        (input3.second == currentTime1.second)) {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " !(!=) " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return false;
    } else {
        std::cout << input3.hour << ":" << input3.minute << ":" << input3.second << " != " <<
                  currentTime1.hour << ":" << currentTime1.minute << ":" << currentTime1.second << std::endl;
        return true;
    }
}

auto Time::count_seconds () const -> uint64_t {
    int secondCount = 0;
    secondCount = (currentTime1.hour * 3600) + (currentTime1.minute * 60) + currentTime1.second;
    return secondCount;
}

auto Time::count_minutes () const -> uint64_t {
    int minuteCount = 0;
    minuteCount = (currentTime1.hour * 60) + currentTime1.minute;
    return minuteCount;
}

auto Time::time_to_midnight () const -> Time {
    int midHour = 0;
    int midMinute = 0;
    int midSecond = 0;

    midHour = 23 - currentTime1.hour;
    midMinute = 59 - currentTime1.minute;

    if (midHour <= 1) {
        midHour = 0;
        if (midMinute <= 1) {
            midHour = 0;
            midMinute = 0;
        }
    }
    if (midMinute <= 1) {
        midMinute = 0;
    }

    midSecond = 60 - currentTime1.second;

    Time midnightTime(midHour, midMinute, midSecond);
    std::cout << "There is " << midHour << ":" << midMinute << ":" << midSecond << " left until midnight." << std::endl;
    return midnightTime;
}


auto Time::to_string() -> std::string {

    std::cout << std::setw(2) << std::setfill('0') << hour << ":"
    << std::setw(2) << std::setfill('0') << minute << ":"
    << std::setw(2) << std::setfill('0') << second << std::endl;

    std::cout << "It is now ";
    std:: cout << time_of_day();
    std::cout << '\n' << std::endl;

    std::string input;
    std::cout << "Extend time by 1 hour, minute, or second? Type hour, minute, or second (or term to terminate)." << std::endl;
    std::cout << "Type op to switch to operator commands, scount to count seconds, mcount to count minutes and mid to count time until midnight." << std::endl;
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

        std::cout << "Enter the minute value you wish to compare to the current time: " << std::endl;
        std::cin >> iMinute;

        std::cout << "Enter the second value you wish to compare to the current time: " << std::endl;
        std::cin >> iSecond;


        Time inputTime(iHour, iMinute, iSecond);

        std::cout << "Please enter an operator: " << std::endl;
        std::cin >> operatorStr;

        if (operatorStr == "+") {
            operator+(inputTime);
        }
        else if (operatorStr == "-") {
            operator-(inputTime);

        } else if (operatorStr == "<") {
            operator<(inputTime);

        } else if (operatorStr == ">") {
            operator>(inputTime);

        } else if (operatorStr == "==") {
            operator==(inputTime);

        } else if (operatorStr == "!=") {
            operator!=(inputTime);

        } else {
                std::cout << "Invalid operator." << std::endl;
        }


    } else if (input == "scount") {
        std::cout << count_seconds();

    } else if (input == "mcount") {
        std::cout << count_minutes();

    } else if (input == "mid") {
        time_to_midnight();

    } else {
        std::cout << "Invalid input." << std::endl;

    }

    return " ";

}

auto main () -> int {

    try {
        while (runCheck) {
            std::cout << currentTime1.to_string() << std::endl;
        }
    } catch (std::out_of_range) {
        std::cout << "The value you have entered exceeded the limits.";
    }


}
