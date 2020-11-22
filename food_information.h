#pragma once
#include <vector>
#include <string>
using namespace std;

// ź, ��, ��, Į�θ�
class Nutrition
{
public:
	Nutrition();
	Nutrition(int carbo, int protein, int fat, int calorie);

	int getCarbo() const { return carbo; }
	int getProtein() const { return protein; }
	int getFat() const { return fat; }
	int getCalorie() const { return calorie; }

	void setCarbo(int carbo) { this->carbo = carbo; }
	void setProtein(int protein) { this->protein = protein; }
	void setFat(int fat) { this->fat = fat; }
	void setCalorie(int calorie) { this->calorie = calorie; }

	void addCarbo(int carbo) { this->carbo += carbo; }
	void addProtein(int protein) { this->protein += protein; }
	void addFat(int fat) { this->fat += fat; }
	void addCalorie(int calorie) { this->calorie += calorie; }

private:
	int carbo;
	int protein;
	int fat;
	int calorie;	
};

//���� Ž��, ��� �߰�, ��Ͽ��� ���� �ʿ�
class Food
{
public:
	Food(wstring name, int carbo, int protein,
		int fat, int calorie);
	Food(wstring one_line);
	wstring get_one_info();		// name car pro fat cal ���� ��ȯ

	wstring get_name() const { return food_name; }
	int getCarbo() const { return nutrition.getCarbo(); }
	int getProtein() const { return nutrition.getProtein(); }
	int getFat() const { return nutrition.getFat(); }
	int getCalorie() const { return nutrition.getCalorie(); }

private:
	wstring food_name;
	Nutrition nutrition;
};

class Foods_info
{
public:
	Foods_info();			// �����ڿ��� read_from_file() ȣ��
	void add_food(Food source);
	void print_foods_info();

	void read_from_file();	// foodlist.txt ���� �о ���Ϳ� ����

	size_t getSize() const { return foods.size(); }

private:
	vector<Food> foods;
};
