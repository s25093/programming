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

class Mr : public Person {
public:
using Person::Person;
        
	std::string title;

	Mr(std::string aNamee, std::string aSurnamee, std::string aTitle = "Mr")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

	virtual auto to_string() const ->std::string;
};

class Ms : public Person {
public:
using Person::Person;
	std::string title;

	Ms(std::string aNamee, std::string aSurnamee, std::string aTitle = "Ms")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

	virtual auto to_string()const ->std::string;
};

class King : public Person {
public:
using Person::Person;
	std::string title;

	King(std::string aNamee, std::string aSurnamee, std::string aTitle = "King")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

	virtual auto to_string() const ->std::string;
};

class Queen : public Person {
public:
using Person::Person;
	std::string title;

	Queen(std::string aNamee, std::string aSurnamee, std::string aTitle = "Queen")
		: Person(aNamee, aSurnamee)
	{
		title = aTitle;
	}

	virtual auto to_string() const ->std::string;
};
