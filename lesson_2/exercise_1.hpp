#ifndef EXERCISE_1_HPP_
#define EXERCISE_1_HPP_

#include <iostream>

enum Gender
{
    GENDER_MALE,
    GENDER_FEMALE
};

class Person
{
private:
    std::string m_name;
    int m_age;
    Gender m_gender;
    float m_weight;
public:
    Person(std::string name, int age, Gender gender, float weight) :
    m_name(name), m_age(age), m_gender(gender), m_weight(weight) {}

    void setName(std::string name = "")
    {
        if (name == "")
        {
        	std::cout << "Введите новое имя: ";
        	std::cin >> m_name;
        }
        else
            m_name = name;
    }

    void setAge(int age = 0)
    {
        if (age == 0)
        {
        	std::cout << "Введите возраст: ";
        	std::cin >> m_age;
        }
        else
            m_age = age;
    }

    void setWeight(float weight = 0.0)
    {
        if (weight == 0)
        {
        	std::cout << "Введите вес: ";
        	std::cin >> m_weight;
        }
        else
            m_weight = weight;
    }

    void printInfo() const
    {
    	std::cout << "Имя: " << m_name << std::endl
            << "Возраст: " << m_age << std::endl
            << "Пол: " << (m_gender == GENDER_MALE ? "муж" : "жен") << std::endl
            << "Вес: " << m_weight << std::endl;
    }
};

class Student : public Person
{
private:
	static int count;
	int m_yos; // year of study
public:
	Student(std::string name, int age, Gender gender, float weight, int yos) :
		Person(name, age, gender, weight), m_yos(yos)
	{
		count++;
	}

	static void printCount()
	{
		std::cout << "Количество студентов: " << count << std::endl;
	}

	void setYearStudy(int yos = 0)
	{
		if (yos == 0)
		{
			std::cout << "Введите год обучения: ";
			std::cin >> m_yos;
		}
		else
			m_yos = yos;
	}

	void incYear()
	{
		m_yos++;
	}

	void printInfo() const
	{
		Person::printInfo();
		std::cout << "Год обучения: " << m_yos << std::endl;
	}

	~Student()
	{
		count--;
	}
};

#endif
