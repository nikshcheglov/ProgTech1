#include "Keeper.h"
#include <fstream>
#include <string>
#include <sstream>

Keeper::Keeper()
{

}

Keeper::Keeper(std::vector<Figure2D> figures2D, std::vector<Figure3D> figures3D)
{
	this->figures2D = figures2D;
	this->figures3D = figures3D;
}

Keeper::Keeper(Keeper* copyFrom)
{
	figures2D = copyFrom->figures2D;
	figures3D = copyFrom->figures3D;
}

void Keeper::addFigure2D()
{
	Figure2D newFigure2D;

	newFigure2D.createFigure2D();

	figures2D.push_back(newFigure2D);
}

void Keeper::addFigure3D()
{
	Figure3D newFigure3D;
	newFigure3D.createFigure3D();

	figures3D.push_back(newFigure3D);
}

bool Keeper::removeFigure2D(int index)
{
	if (index < 0 || index >= figures2D.size())
	{
		std::cout << "No 2D figure with such index!\n";

		return false;
	}

	figures2D.erase(figures2D.begin() + index);
	return true;
}

bool Keeper::removeFigure3D(int index)
{
	if (index < 0 || index >= figures3D.size())
	{
		std::cout << "No 3D Figure with such index!\n";

		return false;
	}

	figures3D.erase(figures3D.begin() + index);
	return true;
}

void Keeper::save()
{
	std::ofstream file("data.txt");
	std::streambuf* oldCout = std::cout.rdbuf();
	std::cout.rdbuf(file.rdbuf());

	describe();

	std::cout << "\t\t\t";
	std::cout.rdbuf(oldCout);
}

bool Keeper::load()
{
	figures2D.clear();
	figures3D.clear();

	std::ifstream file("data.txt");
	std::string line, type;

	while (line != "\t\t\t")
	{
		std::getline(file, line);

		if (line == "\t\t\t") return true;

		std::istringstream stream(line);

		stream >> type;

		if (type == "2D")
		{
			Figure2D newFigure2D;

			stream >> newFigure2D.type;
			stream >> newFigure2D.dimensions;
			stream >> newFigure2D.area;
			stream >> newFigure2D.areaOnScreen;

			figures2D.push_back(newFigure2D);
		}
		else if (type == "3D")
		{
			Figure3D newFigure3D;

			stream >> newFigure3D.type;
			stream >> newFigure3D.dimensions;
			stream >> newFigure3D.volume;
			stream >> newFigure3D.areaOnScreen;

			figures3D.push_back(newFigure3D);
		}
		else
		{
			std::cout << "Invalid save file!\n";
			return false;
		}
	}

	return true;
}


bool Keeper::describe()
{
	if (figures2D.empty() && figures3D.empty())
	{
		return false;
	}

	for (Figure2D a : figures2D)
	{
		a.describe();
	}

	for (Figure3D a : figures3D)
	{
		a.describe();
	}

	return true;
}
