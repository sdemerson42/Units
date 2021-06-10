#include "Person.h"

Person::Person(const std::string& name) :
	m_name{ name }
{}

const std::string& Person::getName() const
{
	return m_name;
}

int Person::sum(int n)
{
	if (n == 0) return 0;
	return n + sum(n - 1);
}