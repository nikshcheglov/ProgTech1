#pragma once
#include "Figure.h"
class Figure3D : public Figure
{
public:
	double volume;

	void createFigure3D();
	void describe();
};