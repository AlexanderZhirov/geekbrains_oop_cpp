#include <math.h>

class Power
{
private:
    float a = 0;
    float b = 0;
public:
    Power() {}

    void set(float num_a, float num_b)
    {
        a = num_a;
        b = num_b;
    }

    float calculate()
    {
        return pow(a, b);
    }
};
