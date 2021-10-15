#include <iostream>
#include <string>
#include "Time.h"

Time currentTime1(14, 21, 50);

auto Time::time_of_day() const -> std::string {
if (hour < 12){
Time currentTimeOfDay = Time::timeofDay::Morning;
} else if (hour == 12) {
Time currentTimeOfDay = Time::timeofDay::Noon;
} else if ((hour > 12) && (hour < 17)) {
Time currentTimeOfDay = Time::timeofDay::Afternoon;
} else {
Time currentTimeOfDay = Time::timeofDay::Evening;
}
return currentTimeOfDay;
}

auto Time::next_hour() -> void {
hour++;
std::cout << hour << std::endl;
}

auto Time::next_minute() -> void {
minute++;
std::cout << minute << std::endl;
}

auto Time::next_second() -> void {
second++;
std::cout << second << std::endl;
}

auto Time::to_string() const -> std::string {

std::cout << hour << ":" << minute << ":" << second << std::endl;

std::cout << "It is now ";
currentTimeOfDay1;
std::cout << '\n' << std::endl;

std::string input;
std::cout << "Extend time by 1 hour, minute, or second? Type hour, minute, or second: " << std::endl;
std::getline(std::cin, input);

if (input == "hour") {

std::cout << "Next hour: ";
currentTime1.next_hour();
std::cout << ":" << minute << ":" << second << std::endl;

} else if (input == "minute") {

std::cout << "Next minute: ";
std::cout << hour << ":"; 
currentTime1.next_minute();
std::cout << ":" << second << std::endl;

} else if (input == "second") {

std::cout << "Next second: ";
std::cout << hour << ":" << minute << ":";
currentTime1.next_second();

} else {

std::cout << "Invalid input." << std::endl;

}

return "End.";

}

auto main () -> int {

std::cout << currentTime1.to_string() << std::endl;
std::cout << currentTime1.time_of_day() << std::endl;

return 0;

}
