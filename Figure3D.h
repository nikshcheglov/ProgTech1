#pragma once
#include "Figure.h"
class Figure3D : public Figure
{
public:
	double volume;

	void createFigure3D();
	void describe();
	Figure3D();
	Figure3D(std::string type, std::string dimensions, double area, double areaOnScreen);
	Figure3D(Figure3D* copyFrom);

	friend std::ostream& operator<<(std::ostream& leftHandSide, const Figure3D& rightHandSide);
};

std::ostream& operator<<(std::ostream& leftHandSide, const Figure3D& rightHandSide);