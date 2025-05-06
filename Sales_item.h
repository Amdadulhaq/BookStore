
#pragma once
#include<string>

class book {
private:
	std::string name;
	std::string isbn;
	int totalCopies;
	int soldCopies;

public:
	book(std::string name,std::string IsbnCode, int total, int sold);

	// member function
	int getRemaining() const;
	void display() const;
};