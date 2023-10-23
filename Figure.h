#pragma once
#include <iostream>

class Figure
{
public:
	//bool isSet = false;
	virtual void describe() = 0; // Чистая виртуальная функция

	inline virtual ~Figure() // Виртуальный деструктор
	{
	}

	std::string type, dimensions;
	double areaOnScreen;
};

