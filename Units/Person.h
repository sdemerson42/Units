#pragma once

#include <string>

class Person
{
public:
	Person(const std::string& name);
	const std::string& getName() const;
	int sum(int n);
private:
	std::string m_name;
};
