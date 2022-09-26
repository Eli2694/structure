#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

typedef struct point
{
	int x;
	int y;
}Point;

typedef struct circle
{
	Point Center;
	double radius;
}Circle;

int main()
{
	Point p1;
	p1.x = 1;
	p1.y = 2;
	Circle c1;
	c1.Center = p1;
	c1.radius = 4;
	//c1.Center.y = 5; can access to another struct and change its value
	return 0;
}