#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

// 01. Структура человек(номер и имя)


class Human {
public:
	Human();
	Human(int number, string name) {
		name_ = name;
		number_ = number;
	}
	~Human();

	//void setName(string name) {
	//	name_ = name;
	//}

	//string getName() const {
	//	return name_;
	//}

private:
	string name_ = " ";
	int number_ = 0;
};


class newHuman {
public:
private:
	string newName_;
};

using namespace std;



int main() {

	setlocale(LC_ALL, "Russian");

	// 02. Вектор для хранения людей
	// 03. Решить, сколько людей создавать

	vector <Human> HumansFirst(5);
	
	for (int i = 0; i < 5; ++i)
	{
		HumansFirst.push_back(Human(12, "sdfsdf"));
	}

	// 04. Создать базу имён

	string nameBase[5] = { {"Petya"}, {"Dasha"}, {"Dima"}, {"Ksuha"}, {"Vata"} };

	// 05. Выбрать новому человеку имя

	srand(time(NULL));

	std::vector<int> numbers(5);   

	for (int n : numbers) {
		int random = rand() / 10 - 1;
		numbers.push_back(random);
		cout << n << "\t";
	}

//	auto tmp = std::find(HumanFirts.begin(), HumanFirts.end(), )

	return 0;
}