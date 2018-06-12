#pragma once
#include "Headers.h"

class client {
	string name;
	int price;
public:
	client() = default;

	client(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	//int getPrice() const { return this->price; }

	friend ostream& operator <<(ostream & os, client c)
	{
		os << c.name << ": " << c.price << endl;
		return os;
	}


	bool operator<(const client& b) const
	{
		return this->price < b.price;
	}
};



