#include <iostream>
#include <vector>
#include "exercise_1.hpp"
#include "exercise_2.hpp"

using namespace std;

int Student::count = 0;

int main()
{
	Student students[] =
	{
		Student("Олег", 20, GENDER_MALE, 75.2, 2020),
		Student("Андрей", 19, GENDER_MALE, 72.8, 2020),
		Student("Анастасия", 20, GENDER_FEMALE, 55.2, 2020),
		Student("Ольга", 21, GENDER_FEMALE, 49.3, 2020),
		Student("Владимир", 19, GENDER_MALE, 69.9, 2020)
	};

	students[0].printInfo();
	students[2].printInfo();

	Student::printCount();

	// Exercise 2

	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	// Exercise 3
	/*
		Для реализации игры в Блэкджек необходимы данные объекты:

		1) Колода карт
		2) Игрок
		3) Дилер

		Исходя из указанных объектов можно определить несколько классов:

		1) Карта
			- номинал
			- масть
		2) Колода
			- массив ссылок на объекты класса Карта
		3) Игрок (абстрактный класс)
			- Имя игрока
		4) Игрок (человек, потомок от абстрактного класса Игрок)
		5) Дилер (человек, потомок от абстрактного класса Игрок)
		6) Рука (набор карт)
			- массив ссылок на карты каждого игрока
		7) Игра
			- текущая Колода
			- текущий Дилер
			- текущий Игрок
	*/

    return 0;
}





















