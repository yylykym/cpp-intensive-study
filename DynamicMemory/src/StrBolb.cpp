#include "StrBolb.h"
#include <stdexcept>

StrBolb::StrBolb() :data(std::make_shared<std::vector<std::string>>())
{
}

StrBolb::StrBolb(std::initializer_list<std::string> il) :data(std::make_shared<std::vector<std::string>>(il))
{
}

void StrBolb::pop_back()
{
	check(0, "pop_back on empty StrBolb");
	data->pop_back();
}

std::string& StrBolb::front()
{

	check(0, "front on empty StrBolb");
	return data->front();
}

std::string& StrBolb::front() const
{

	check(0, "front on empty StrBolb");
	return data->front();
}

std::string& StrBolb::back()
{
	check(0, "back on empty StrBolb");
	return data->back();
}


std::string& StrBolb::back() const
{
	check(0, "back on empty StrBolb");
	return data->back();
}

void StrBolb::check(size_t i, const std::string& msg) const
{
	if (data->size() < i)
		throw std::out_of_range(msg);
}
