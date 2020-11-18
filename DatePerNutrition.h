#pragma once
#include <string>
#include <vector>
using namespace std;

// ��¥ �� ������ ����� ��
// ����ڷκ��� ��¥, ���� ���� �Է� ������ food_info.txt����
// �ش� ������ ������� ã�Ƽ� �߰���
class DatePerNutrition
{
public:
	DatePerNutrition(string date, double carbo, double protein,
		double fat, double calorie);
	
	string getDate() const { return date; }
	double getCarbo() const { return carbo; }
	double getProtein() const { return protein; }
	double getFat() const { return fat; }
	double getCalorie() const { return calorie; }

	void addCarbo(double carbo) { this->carbo += carbo; }
	void addProtein(double protein) { this->protein += protein; }
	void addFat(double fat) { this->fat += fat; }
	void addCalorie(double calorie) { this->calorie += calorie; }

private:
	string date;
	double carbo;
	double protein;
	double fat;
	double calorie;
};

class Dates_Nutritions
{
public:
//	Dates_Nutritions();
	void addData(string date, double carbo, double protein,
		double fat, double calorie);

private:
	vector<DatePerNutrition> datas;
	// �� ��¥ ���� ź, ��, ��, Į�θ� ����� ����
};
