#pragma once
#include <iostream>

class Figure
{
public:
	//bool isSet = false;
	virtual void describe() = 0;

	inline virtual ~Figure()
	{
	}

	std::string type, dimensions;
	double areaOnScreen;
};

