//cpp
#include "loops.h"
using namespace std;

int factorial(int num)
{
    int factorial = num;
    for (int i = num - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}