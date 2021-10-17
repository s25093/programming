struct Time {

    int hour;
    int minute;
    int second;

    enum class timeOfDay{Morning, Noon, Afternoon, Evening, Night};

    auto to_string() -> std::string;
    auto time_of_day() const -> std::string;
    auto enum_to_string(timeOfDay) const -> std::string;

    auto operator+ ( Time &)  -> Time ;
    auto operator- ( Time &)  -> Time ;
    auto operator< ( Time const &)  -> bool ;
    auto operator> ( Time const &)  -> bool ;
    auto operator== ( Time const &)  -> bool ;
    auto operator!= ( Time const &)  -> bool ;

    auto next_hour() -> void;
    auto next_minute() -> void;
    auto next_second() -> void;

    Time(int aHour, int aMinute, int aSecond) {
        hour = aHour;
        minute = aMinute;
        second = aSecond;
    }

};
