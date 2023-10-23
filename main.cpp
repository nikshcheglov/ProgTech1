#include <iostream>
#include <conio.h>
#include "Keeper.h"

int main()
{
	Keeper keeper;
	char c;
	int index;

menu:
	std::cout
		<< "1. Add 2D figure\n"
		<< "2. Add 3D figure\n"
		<< "3. Remove 2D figure\n"
		<< "4. Remove 3D figure\n"
		<< "5. Display contents\n"
		<< "6. Save to file\n"
		<< "7. Load from file\n"
		<< "0. Exit\n\n";

	
keyscan:
	switch (c = _getch())
	{
	case '1':
		keeper.addFigure2D();

		break;
	case '2':
		keeper.addFigure3D();

		break;
	case '3':
		std::cout << "Enter index of 2D figure to be removed: ";
		std::cin >> index;
		keeper.removeFigure2D(index);

		break;
	case '4':
		std::cout << "Enter index of 3D figure to be removed: ";
		std::cin >> index;
		keeper.removeFigure3D(index);

		break;
	case '5':
		if(!keeper.describe()) std::cout << "Nothing to display!\n";

		break;
	case '6':
		keeper.save();

		std::cout << "Saved!\n";

		break;
	case '7':
		keeper.load();

		std::cout << "Loaded!\n";

		break;
	case '0':
		exit(0);
	default:
		goto keyscan;
	}

	goto menu;
}