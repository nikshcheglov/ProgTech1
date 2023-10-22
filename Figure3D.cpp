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