#include <iostream>
#include <math.h>

using namespace std;

bool isTriangleValid(unsigned a, unsigned b, unsigned c);
int getPerimeter(int x1, int y1, int x2, int y2, int x3, int y3);
int getArea(int x1, int y1, int x2, int y2, int x3, int y3);
bool isInCircleWithRadius(int x1, int y1, int x2, int y2, int x3, int y3, int radius);
unsigned calculate(int x1, int y1, int x2, int y2);

int main()
{
    
}

unsigned calculate(int x1, int y1, int x2, int y2)
{
    int x = x2 - x1, y = y2 - y1;
    return sqrt(x * x + y * y);
}

bool isTriangleValid(unsigned a, unsigned b, unsigned c)
{
    return ((a + b > c) && (a + c > b) && (b + c > a));
}

int getPerimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
    unsigned a = calculate(x1, y1, x2, y2);
    unsigned b = calculate(x1, y1, x3, y3);
    unsigned c = calculate(x2, y2, x3, y3);

    if (isTriangleValid(a, b, c))
        return a + b + c;
}

int getArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    unsigned a = calculate(x1, y1, x2, y2);
    unsigned b = calculate(x1, y1, x3, y3);
    unsigned c = calculate(x2, y2, x3, y3);

    if (isTriangleValid(a, b, c))
    {
        double halfPerimeter = getPerimeter(x1, y1, x2, y2, x3, y3) / 2;
        return sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    }
}

bool isInCircleWithRadius(int x1, int y1, int x2, int y2, int x3, int y3, int radius)
{
    unsigned a = calculate(x1, y1, x2, y2);
    unsigned b = calculate(x1, y1, x3, y3);
    unsigned c = calculate(x2, y2, x3, y3);

    if (isTriangleValid(a, b, c))
        return (calculate(x1, y1, 0, 0) <= radius && calculate(x2, y2, 0, 0) <= radius && calculate(x3, y3, 0, 0) <= radius);
}