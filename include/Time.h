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
    auto operator< ( Time &)  -> bool ;
    auto operator> ( Time &)  -> bool ;
    auto operator== ( Time &)  -> bool ;
    auto operator!= ( Time &)  -> bool ;

    auto count_seconds () const -> uint64_t ;
    auto count_minutes () const -> uint64_t ;
    auto time_to_midnight () const -> Time ;

    auto next_hour() -> void;
    auto next_minute() -> void;
    auto next_second() -> void;

    Time(int aHour, int aMinute, int aSecond) {
        hour = aHour;
        minute = aMinute;
        second = aSecond;

        if (hour > 24) {
            throw std::out_of_range("The hour value cannot exceed 24");
        }

        if (hour > 60) {
            throw std::out_of_range("The minute value cannot exceed 60");
        }

        if (second > 60) {
            throw std::out_of_range("The second value cannot exceed  60");
        }
    }

};
