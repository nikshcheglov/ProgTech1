#include "Figure2D.h"

void Figure2D::createFigure2D()
{
	std::cout << "Enter 2D Figure's type: ";
	std::cin >> type;
	std::cout << "Enter 2D Figure's dimensions: ";
	std::cin >> dimensions;
	std::cout << "Enter 2D Figure's area: ";
	std::cin >> area;
	std::cout << "Enter 2D Figure's area on screen: ";
	std::cin >> areaOnScreen;
}

void Figure2D::describe()
{
	std::cout << "2D " << type << ' ' << dimensions << ' ' << area << ' ' << areaOnScreen << '\n';
}

Figure2D::Figure2D()
{
	area = 0;
}

Figure2D::Figure2D(std::string type, std::string dimensions, double area, double areaOnScreen)
{
	this->type = type;
	this->dimensions = dimensions;
	this->area = area;
	this->areaOnScreen = areaOnScreen;
}

Figure2D::Figure2D(Figure2D* copyFrom)
{
	type = copyFrom->type;
	dimensions = copyFrom->dimensions;
	area = copyFrom->area;
	areaOnScreen = copyFrom->areaOnScreen;
}

std::ostream& operator<<(std::ostream& leftHandSide, const Figure2D& rightHandSide)
{
	leftHandSide << "2D " << rightHandSide.type << ' ' << rightHandSide.dimensions << ' '
		<< rightHandSide.area << ' ' << rightHandSide.areaOnScreen << '\n';

	return leftHandSide;
}
