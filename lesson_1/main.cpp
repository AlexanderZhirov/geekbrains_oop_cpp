#include <iostream>
#include "exercise_1.hpp"
#include "exercise_2.hpp"
#include "exercise_3.hpp"

using namespace std;

int main()
{
    // Exercise 1
    Power Num;

    Num.set(2.0, 3.0);
    cout << Num.calculate() << endl;

    // Exercise 2

    RGBA Color1;
    Color1.print();
    RGBA Color2(100, 123, 210, 13);
    Color2.print();

    // Exercise 3

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
