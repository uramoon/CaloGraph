#include "DatePerNutrition.h"
#include <iostream>
#include <cstdlib>
using namespace std;

DatePerNutrition::DatePerNutrition(string date,
	double carbo, double protein, double fat, double calorie)
	: date(date), carbo(carbo), protein(protein),
	fat(fat), calorie(calorie) {}

//Dates_Nutritions::Dates_Nutritions()
//{
//
//}

void Dates_Nutritions::addData(string date,
	double carbo, double protein, double fat, double calorie)
{
	for (size_t i = 0; i < datas.size(); i++) {
		// datas ���Ϳ� ���� ��¥�� ��ü�� ������, �� ��ü�� ������
		if (datas[i].getDate() == date) {
			datas[i].addCarbo(carbo);
			datas[i].addProtein(protein);
			datas[i].addFat(fat);
			datas[i].addCalorie(calorie);
			return;
		}
	}

	// datas ���Ϳ� ���� ��¥�� ��ü�� ������,
	// ��ü�� �����ؼ� ���Ϳ� push
	datas.push_back(DatePerNutrition(date,
		carbo, protein, fat, calorie));
}