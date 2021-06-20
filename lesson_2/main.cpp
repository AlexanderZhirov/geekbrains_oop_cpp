#include <iostream>
#include "exercise_1.hpp"

using namespace std;

int Student::count = 0;

int main()
{
	Student Alex("Олег", 20, GENDER_MALE, 75.2, 2020);
    Alex.printInfo();
    Student::printCount();

    return 0;
}
