#include "drawing_graph.h"
#include "food_information.h"
#include "Information.h"
#include "Calo_UI.h"
#include "compare_data.h"
#include "drawing_graph.h"
#include <iostream>
#include <vector>
#include <atlstr.h>
#include <locale>

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

	USES_CONVERSION;
	// string, cout, cin���� �ѱ� �ȳ����� �߰����� �� 

	/*
	Foods_info xaeha;

	Food new_food(L"������", 100, 100, 100, 100);
	xaeha.add_food(new_food);

	xaeha.print_foods_info();
	cout << endl << endl << endl;

	cout << "xaeha ���� ��ġ: " << xaeha.is_exist(L"������");
	*/
	return 0;
}