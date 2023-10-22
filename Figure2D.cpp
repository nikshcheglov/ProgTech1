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