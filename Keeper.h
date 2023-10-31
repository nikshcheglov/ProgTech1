#pragma once
#include "Figure2D.h"
#include "Figure3D.h"
#include <vector>

class Keeper
{
	std::vector<Figure2D> figures2D;
	std::vector<Figure3D> figures3D;
public:
	Keeper();
	Keeper(std::vector<Figure2D> figures2D, std::vector<Figure3D> figures3D);
	Keeper(Keeper* copyFrom);

	void addFigure2D();
	void addFigure3D();

	bool copyLastFigure2D();

	bool removeFigure2D(int index);
	bool removeFigure3D(int index);

	void save();
	bool load();

	bool describe();
};