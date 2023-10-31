#pragma once
#include <iostream>

class Figure
{
public:
	virtual void describe() = 0; // Чистая виртуальная функция

	inline virtual ~Figure() // Виртуальный деструктор
	{
	}

	std::string type, dimensions;
	double areaOnScreen;
};

