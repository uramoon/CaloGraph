#include "Information.h"

using namespace std;

Information::Information(string name, bool gender, int age, int height, int weight)
{
	set_information(name, gender, age, height, weight);
}

vector<Information> Information::save_information(vector<Information> info)
{
	Information target = *this;
	if (find(info.begin(), info.end(), target) == info.end()) {
		info.push_back(target);
	}

	return info;
}

//Read Information from Console
void Information::input_information() 
{
	string name;
	bool gender;
	int gender_input = -1, age, height, weight;
	int y = 2;

	gotoxy(3, y);
	y += 3;
	cout << "�̸��� �Է��ϼ���. >> ";
	cin >> name;

	gotoxy(3, y);
	y += 1;
	cout << "������ ����ּ���.";
	gotoxy(3, y);
	y += 3;
	cout << "1. ����    2. ���� >> ";
	
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
		gotoxy(3, y);
		y += 3;
		cout << "1�� 2�� �������ּ���. \n1. ����    2. ���� >> ";
	}

	gotoxy(3, y);
	y += 3;
	cout << "���̰� ��� �ǽó���? (0 ~ 99��) >> ";
	
	while (1) {
		cin >> age;
		if (0 < age && age < 100) break;
		gotoxy(3, y);
		y += 3;
		cout << "0������ 99������ �Է��� �� �ֽ��ϴ�. >> ";
	}

	gotoxy(3, y);
	cout << "Ű�� �����Ը� �Է����ּ���. " << endl;
	gotoxy(3, y + 1);
	cout << "Ű >> ";
	cin >> height;
	gotoxy(3, y + 2);
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
	write.open("information.txt");

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
