#include <iostream>
#include <vector>
#include "exercise_1.hpp"

using namespace std;

int Student::count = 0;

int main()
{
//	Student students[] =
//	{
//		Student("Олег", 20, GENDER_MALE, 75.2, 2020),
//		Student("Андрей", 19, GENDER_MALE, 72.8, 2020),
//		Student("Анастасия", 20, GENDER_FEMALE, 55.2, 2020),
//		Student("Ольга", 21, GENDER_FEMALE, 49.3, 2020),
//		Student("Владимир", 19, GENDER_MALE, 69.9, 2020)
//	};
//
//	Student::printCount();
//
//	students[0].printInfo();
//	students[2].printInfo();


	vector<Student> students;

	students.emplace_back("Олег", 20, GENDER_MALE, 75.2, 2020);
	students.emplace_back("Андрей", 19, GENDER_MALE, 72.8, 2020);
	students.emplace_back("Анастасия", 20, GENDER_FEMALE, 55.2, 2020);
	students.emplace_back("Ольга", 21, GENDER_FEMALE, 49.3, 2020);
	students.emplace_back("Владимир", 19, GENDER_MALE, 69.9, 2020);

	Student::printCount();

    return 0;
}
