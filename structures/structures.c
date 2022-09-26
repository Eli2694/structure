#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

typedef struct Date 
{
	int day;
	int month;
	int year;
}Date;

//function Specification
void printDate(Date dt);
Date inputDate();

int main_s()
{
	Date myBirthDate,todayDate; // declaration of struct variable
	myBirthDate = inputDate(); // inputDate Function return Date struct variable(dt)
	todayDate = inputDate();
	printDate(myBirthDate); // printDate Function - Printing "myBirthDate" struct variable
	printDate(todayDate);
	return 0;
}

void printDate(Date dt)
{
	printf("day = %d, month = %d, year = %d\n", dt.day, dt.month, dt.year);
}

Date inputDate()
{
	Date dt; // variable declaretion for struct
	printf("input day between (1-31)\n");
	scanf("%d", &dt.day);
	printf("input month between (1-12)\n");
	scanf("%d", &dt.month);
	printf("input year \n");
	scanf("%d", &dt.year);
	return dt; // return struct variable we 3 input values

}