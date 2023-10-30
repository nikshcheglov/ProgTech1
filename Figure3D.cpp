#include "Figure3D.h"

void Figure3D::createFigure3D()
{
	std::cout << "Enter 3D Figure's type: ";
	std::cin >> type;
	std::cout << "Enter 3D Figure's dimensions: ";
	std::cin >> dimensions;
	std::cout << "Enter 3D Figure's volume: ";
	std::cin >> volume;
	std::cout << "Enter 3D Figure's area on screen: ";
	std::cin >> areaOnScreen;
}

void Figure3D::describe()
{
	std::cout << "3D " << type << ' ' << dimensions << ' ' << volume << ' ' << areaOnScreen << '\n';
}

Figure3D::Figure3D()
{
	volume = 0;
}

Figure3D::Figure3D(std::string type, std::string dimensions, double area, double areaOnScreen)
{
	this->type = type;
	this->dimensions = dimensions;
	this->volume = volume;
	this->areaOnScreen = areaOnScreen;
}

Figure3D::Figure3D(Figure3D* copyFrom)
{
	type = copyFrom->type;
	dimensions = copyFrom->dimensions;
	volume = copyFrom->volume;
	areaOnScreen = copyFrom->areaOnScreen;
}