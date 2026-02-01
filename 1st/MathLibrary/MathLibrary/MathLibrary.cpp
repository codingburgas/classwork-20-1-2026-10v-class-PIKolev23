#include <iostream>
#include <cmath>
#include "MathLibrary.h"

using namespace std;

double calculatePerimeter(const Triangle& t)
{
    return t.a + t.b + t.c;
}

double calculateArea(const Triangle& t)
{
    double p = calculatePerimeter(t) / 2;
    return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}
