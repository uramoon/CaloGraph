#include "drawing_graph.h"
#include "food_information.h"
#include "Information.h"
#include "Calo_UI.h"
#include "drawing_graph.h"
#include <iostream>
#include <vector>

using namespace std;

void print()
{
	cout << "now print graph" << endl;
}

int main()
{
	system(" mode  con lines=50   cols=130 ");
	init_calo_ui();

	while (1) {
		print_edge();
		print_main_menu();
	}

	/*string person_name = "man";
	bool gender = true;

	Drawing draw(Point(150, 150), 1000, 800, "CaloGraph");
	person_name += ".txt";

	Person_info pinfo(person_name);
	draw.drawPersonInfo(draw, pinfo, gender);*/

	/*Foods_info xaeha;

	Food new_food(L"������", 100, 100, 100, 100);
	xaeha.add_food(new_food);

	xaeha.print_foods_info();*/

	return 0;
}