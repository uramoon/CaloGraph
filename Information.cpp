#include "Information.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Information::Information(string name, bool gender, int age, int height, int weight)
{
	set_information(name, gender, age, height, weight);
}

void Information::save_information(vector<Information> info)
{
	ofstream write_file;
	write_file.open("information.txt", fstream::out | fstream::app); //***test: information.txt*** | ***Release: ../information.txt***

	if (write_file.is_open()) {
		Information target = *this;
		if (find(info.begin(), info.end(), target) == info.end()) {
			string temp = convert_string();
			const char* write_string = temp.c_str();
			write_file.write(write_string, strlen(write_string));
		}
	}

	write_file.close();
}

//Read Information from Console
void Information::input_information() 
{
	string name;
	bool gender;
	int gender_input = -1, age, height, weight;
	cout << "�̸��� �Է��ϼ���. >> ";
	cin >> name;
	cout << "������ ����ּ���. \n1. ����    2. ���� >> ";
	
	while (1) {
		cin >> gender_input;
		if (gender_input == 1) {
			gender = true;
			break;
		}
		else if (gender_input == 2) {
			gender = false;
			break;
		}
		cout << "1�� 2�� �������ּ���. \n1. ����    2. ���� >> ";
	}

	cout << "���̰� ��� �ǽó���? (0 ~ 99��) >> ";
	
	while (1) {
		cin >> age;
		if (0 < age && age < 100) break;
		cout << "0������ 99������ �Է��� �� �ֽ��ϴ�. >> ";
	}

	cout << "Ű�� �����Ը� �Է����ּ���. " << endl;
	cout << "Ű >> ";
	cin >> height;
	cout << "������ >> ";
	cin >> weight;

	this->set_information(name, gender, age, height, weight);

	system("cls");
}

//Save Information to this Class
void Information::set_information(string name, bool gender, int age, int height, int weight)
{
	set_name(name);
	set_gender(gender);
	set_age(age);
	set_height(height);
	set_weight(weight);
}

void save_to_txt(vector<Information> infos) 
{
	ofstream write;
	write.open("Information.txt");

	if (write.is_open()) {
		for (Information info : infos) {
			string temp = info.convert_string();
			const char* str = temp.c_str();

			write.write(str, strlen(str));
		}
	}

	write.close();
}

void del_information(Information target) 
{
	vector<Information> infos = get_information();
	vector<Information>::iterator itr;
	
	for (itr = infos.begin(); itr != infos.end(); ++itr) {
		if (*itr == target) break;
	}

	infos.erase(itr);

	save_to_txt(infos);
}