#include <iostream>
#include <string>
#include "Menu.h"

using namespace std;

void main()
{
	Menu m = Menu();
	m.DisplayDish();
	m.ChooseDish();
	m.Remark();

	system("pause");
	return;

}