#pragma once

#include <vector>
#include <memory>
#include <string>

class StrBolb
{
public:
	typedef std::vector<std::string> ::size_type size_t;
	StrBolb();
	StrBolb(std::initializer_list<std::string>);
	size_t size() { return data->size(); }
	bool empty() { return data->empty(); }
	void push_back(const std::string& t) { data->push_back(t); }
	void pop_back();
	std::string& front();
	std::string& front() const;
	std::string& back();
	std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_t i, const std::string& msg) const;
};

