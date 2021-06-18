#include <iostream>

class Stack
{
private:
    int array[10];
    int length = 0;

public:
    Stack() {}

    void reset()
    {
        while (length)
            array[length--] = 0;
    }

    bool push(int num)
    {
        if (length > 9)
            return false;
        else
            array[length++] = num;

        return true;
    }

    int pop()
    {
        if (length)
            return array[length--];
        else
            std::cout << "Stack is empty!" << std::endl;

        return -1;
    }

    void print()
    {
        for (int i = 0; i < length; i++)
            std::cout << array[i] << ' ';
        std::cout << std::endl;
    }
};
