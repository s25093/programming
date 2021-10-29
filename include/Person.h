class Person {
public: 
	std::string name;
	std::string surname;

	Person(std::string aName, std::string aSurname)
	{
        name = aName;
        surname = aSurname;
    }

	virtual auto to_string() const->std::string;

};

class Mr : Person {
public:
	std::string title;


	Mr(std::string aNamee, std::string aSurnamee, std::string aTitle = "Mr")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

    auto who_is_it(Mr const& person) const -> std::string;

	virtual auto to_string() const ->std::string;
};

class Ms : Person {
public:
	std::string title;

	Ms(std::string aNamee, std::string aSurnamee, std::string aTitle = "Ms")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

    auto who_is_it(Ms const& person) const -> std::string;

	virtual auto to_string()const ->std::string;
};

class King : Person {
public:
	std::string title;

	King(std::string aNamee, std::string aSurnamee, std::string aTitle = "King")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

    auto who_is_it(King const& person) const -> std::string;

	virtual auto to_string() const ->std::string;
};

class Queen : Person {
public:
	std::string title;

	Queen(std::string aNamee, std::string aSurnamee, std::string aTitle = "Queen")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

    auto who_is_it(Queen const& person) const -> std::string;

	virtual auto to_string() const ->std::string;
};
