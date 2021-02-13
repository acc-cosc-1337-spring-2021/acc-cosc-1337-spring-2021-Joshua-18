#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}
//write code for multiply_numbers function here
//function returns product of num1 and num2



//const double taxt_rate
const double taxt_rate = 0.0675;

// function multiplies taxt rate * meal amount and returns their product
double get_sales_tax_amount(double meal_amount)
{
	return taxt_rate * meal_amount;
	 
}

// func code meal_amount * tip_rate
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}