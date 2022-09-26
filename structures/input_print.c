#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "structures.h"
#pragma warning(disable:4996)

typedef struct point
{
	int x;
	int y;
}Point;

void printInformation(Point p)
{
	printf("x = %d, y = %d\n", p.x, p.y);
}

Point inputPointInformation()
{
	Point dot;
	printf("Enter 'x' value: \n");
	scanf("%d", &dot.x);
	printf("Enter 'y' value: \n");
	scanf("%d", &dot.y);
	return dot;
}

int main_p()
{
	Point dot = inputPointInformation();
	printInformation(dot);
	return 0;
}