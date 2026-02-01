#ifndef MATHLIBRARY_H
#define MATHLIBRARY_H

struct Triangle
{
    double a;
    double b;
    double c;
};

double calculatePerimeter(const Triangle& t);
double calculateArea(const Triangle& t);

#endif
