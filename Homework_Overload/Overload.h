#pragma once
#include <string>
#include <iostream>
#include <fstream>
class Overload
{
public:
	Overload(const std::string& name);
	Overload();

	std::string& getName();

	void setName(std::string name);

	const Overload& operator+ (Overload& num);

	size_t operator-(size_t num);

	size_t operator*(size_t num);

	size_t operator/(size_t num);

	bool operator==(Overload& other);

	bool operator!=(Overload& other);

	std::string operator+=(Overload& other);

	friend std::ostream& operator<< (std::ostream& out, const Overload& point);

private:
	std::string _name;
};