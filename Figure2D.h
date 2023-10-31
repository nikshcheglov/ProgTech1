#pragma once
#include "Figure.h"
class Figure2D : public Figure
{
public:
	double area;

	void createFigure2D();
	void describe();

	Figure2D();
	Figure2D(std::string type, std::string dimensions, double area, double areaOnScreen);
	Figure2D(Figure2D* copyFrom);

	friend std::ostream& operator<<(std::ostream& leftHandSide, const Figure2D& rightHandSide);
};

std::ostream& operator<<(std::ostream& leftHandSide, const Figure2D& rightHandSide);