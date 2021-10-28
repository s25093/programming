class Person {
public: 
	std::string name;
	std::string surname;

	Person(std::string aName, std::string aSurname)
		: name{ aName }, surname{aSurname}
	{}

	virtual auto to_string()->std::string;


};

class Mr : Person {
public:
	std::string title;

	Mr(std::string aTitle, std::string aNamee, std::string aSurnamee)
		: Person{ aNamee, aSurnamee }
	{
		title = aTitle;
	}

	virtual auto to_string1()->std::string;
};

class Ms : Person {
public:
	std::string title;

	Ms(std::string aTitle, std::string aNamee, std::string aSurnamee)
		: Person{ aNamee, aSurnamee }
	{
		title = aTitle;
	}

	virtual auto to_string2()->std::string;
};

class King : Person {
public:
	std::string title;

	King(std::string aTitle, std::string aNamee, std::string aSurnamee)
		: Person{ aNamee, aSurnamee }
	{
		title = aTitle;
	}

	virtual auto to_string3()->std::string;
};

class Queen : Person {
public:
	std::string title;

	Queen(std::string aTitle, std::string aNamee, std::string aSurnamee)
		: Person{ aNamee, aSurnamee }
	{
		title = aTitle;
	}

	virtual auto to_string4()->std::string;
};
