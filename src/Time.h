struct Time {

int hour;
int minute;
int second;

auto to_string() const -> std::string;

auto next_hour() -> void;
auto next_minute() -> void;
auto next_second() -> void;

Time(int aHour, int aMinute, int aSecond) {
hour = aHour;
minute = aMinute;
second = aSecond;
}

};
