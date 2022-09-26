#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

typedef struct rational // 1/3 שבר
{
	int numerator;
	int denominator;
}Rational;


void rationalIncrement(Rational* var)
{
	var->numerator = var->numerator + var->denominator;
}

void rationalDecrement(Rational* var)
{
	var->numerator = var->numerator - var->denominator;
}

Rational Addition(Rational* var1, Rational* var2)
{
	Rational result;
	result.denominator = var1->denominator * var2->denominator;
	result.numerator = var1->denominator * var2->numerator + var1->numerator * var2->denominator;
	return result;
}

Rational subtraction(Rational* var1, Rational* var2)
{
	Rational result;
	result.denominator = var1->denominator * var2->denominator;
	result.numerator = var1->numerator * var2->denominator - var1->denominator * var2->numerator;
	return result;
}

Rational Multiplication(Rational* var1, Rational* var2)
{
	Rational result;
	result.numerator = var1->numerator * var2->numerator;
	result.denominator = var1->denominator * var2->denominator;
	return result;
}

Rational Division(Rational* var1, Rational* var2)
{
	Rational result;
	result.numerator = var1->numerator * var2->denominator;
	result.denominator = var1->denominator * var2->numerator;
	return result;
}

void equal(Rational* var1, Rational* var2)
{
	if (var1->numerator == var2->numerator && var1->denominator == var2->denominator)
	{
		printf("Equal Numbers\n");
	}
	else
	{
		printf("Not Equal Numbers\n");
	}
}

void biggerThen(Rational* var1, Rational* var2)
{
	if (var1->denominator == var2->denominator)
	{
		if (var1->numerator > var2->numerator)
		{
			printf("var1 bigger then var2\n");
		}
		else
		{
			printf("var2 bigger then var1\n");
		}
	}
	else
	{
		if (var1->denominator < var2->denominator)
		{
			var1->numerator = (var2->denominator / var1->denominator) * var1->numerator;
			if (var1->numerator > var2->numerator)
			{
				printf("var1 bigger then var2\n");
			}
			else
			{
				printf("var2 bigger then var1\n");
			}
		}
		else
		{
			var2->numerator = (var1->denominator / var2->denominator) * var1->numerator;
			if (var1->numerator > var2->numerator)
			{
				printf("var1 bigger then var2\n");
			}
			else
			{
				printf("var2 bigger then var1\n");
			}
		}
	}
}


int main_practice()
{
	Rational var1;
	var1.numerator = 1;
	var1.denominator = 2;
	Rational var2;
	var2.numerator = 3;
	var2.denominator = 5;

	rationalIncrement(&var1);
	printf("%d/%d\n", var1.numerator, var1.denominator);
	rationalDecrement(&var1);
	printf("%d/%d\n", var1.numerator, var1.denominator);

	Rational MultiplicationResult,DivisonResult,AdditonResult,SubtractionResult;
	MultiplicationResult = Multiplication(&var1, &var2);
	printf("var1 = %d/%d, var2 = %d/%d\n", var1.numerator, var1.denominator, var2.numerator, var2.denominator);
	printf("Multiplication Result: %d/%d\n", MultiplicationResult.numerator, MultiplicationResult.denominator);
	DivisonResult = Division(&var1, &var2);
	printf("var1 = %d/%d, var2 = %d/%d\n", var1.numerator, var1.denominator, var2.numerator, var2.denominator);
	printf("Divison Result: %d/%d\n", DivisonResult.numerator, DivisonResult.denominator);
	AdditonResult = Addition(&var1, &var2);
	printf("var1 = %d/%d, var2 = %d/%d\n", var1.numerator, var1.denominator, var2.numerator, var2.denominator);
	printf("Addition Result: %d/%d\n", AdditonResult.numerator, AdditonResult.denominator);
	SubtractionResult = subtraction(&var1, &var2);
	printf("var1 = %d/%d, var2 = %d/%d\n", var1.numerator, var1.denominator, var2.numerator, var2.denominator);
	printf("Subtraction Result: %d/%d\n", SubtractionResult.numerator, SubtractionResult.denominator);
	return 0;
}