#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "structures.h"
#pragma warning(disable:4996)

//function - specification
Date findTheNextDate(Date var);

int main_fnd()
{
	Date currentDate,tommorowDate;
	currentDate = inputDate();
	tommorowDate = findTheNextDate(currentDate);
	printDate(currentDate);
	printDate(tommorowDate);

	return 0;
}

Date findTheNextDate(Date var)
{
	Date dt = var;
	if (dt.day == 31)
	{
		dt.month++;
		dt.day = 1;
	}
	else if (dt.day == 31 && dt.month == 12)
	{
		dt.day = 1;
		dt.month = 1;
		dt.year++;
	}
	else
	{
		dt.day++;
	}
	return dt;
}