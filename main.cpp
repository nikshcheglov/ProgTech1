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
		<< "3. Display contents\n"
		<< "4. Save to file\n"
		<< "5. Load from file\n"
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
		if(!keeper.describe()) std::cout << "Nothing to display!\n";

		break;
	case '4':
		keeper.save();

		std::cout << "Saved!\n";

		break;
	case '5':
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