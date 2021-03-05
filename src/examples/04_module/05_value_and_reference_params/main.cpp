#include<iostream>
#include "value_ref.h"
int main() 
{
	// auto num = 5;//existing int variable
	// //int& num_ref = num;

	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Address of num is: "<<&num<<"\n\n";
	

	// int& num_ref = num;//??reference variable, can only be assigned once!
	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Value of num_ref is: "<<num_ref<<"\n\n";

	// num_ref = 10;
	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Value of num_ref is: "<<num_ref<<"\n";
	// std::cout<<"Address of num_ref is: "<<&num_ref<<"\n\n";

	auto num1 = 5;
	auto num2 = 0;

	pass_by_val_and_ref(num1, num2);// call by value

	return 0;
}